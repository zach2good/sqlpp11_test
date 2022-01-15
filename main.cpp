#include <memory>

#ifdef _WIN32
#include <crtdbg.h>
#endif

#include <sqlpp11/custom_query.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include "database/char_history.h"
#include "database/char_vars.h"
#include "database/chars.h"

using namespace xidb;

namespace
{
    struct on_duplicate_key_update
    {
        std::string _serialized;

        template <typename Db, typename Assignment>
        on_duplicate_key_update(Db&, Assignment assignment)
        {
            typename Db::_serializer_context_t context;
            _serialized = " ON DUPLICATE KEY UPDATE " + serialize(assignment, context).str();
        }

        template <typename Db, typename Assignment>
        auto operator()(Db&, Assignment assignment) -> on_duplicate_key_update&
        {
            typename Db::_serializer_context_t context;
            _serialized += ", " + serialize(assignment, context).str();
            return *this;
        }

        auto get() const -> sqlpp::verbatim_t<::sqlpp::no_value_t>
        {
            return ::sqlpp::verbatim(_serialized);
        }
    };
} // namespace

constexpr Chars       chars{};
constexpr CharHistory char_history{};
constexpr CharVars    char_vars{};

sqlpp::mysql::connection database_connect()
{
    auto config      = std::make_shared<sqlpp::mysql::connection_config>();
    config->host     = "localhost";
    config->user     = "root";
    config->password = "root";
    config->database = "xidb";
    config->port     = 3306;
    config->debug    = true;

    sqlpp::mysql::connection db(config);
    return db;
}

void unconditional_select(sqlpp::mysql::connection& db)
{
    std::cout << "Unconditional select test\n";
    for (auto const& row : db(select(all_of(chars)).from(chars).unconditionally()))
    {
        std::cout << "charid:" << row.charid << "\n";
        std::cout << "charname: " << row.charname << "\n";
        std::cout << "nation: " << row.nation << "\n";
        std::cout << "posX: " << row.posX << "\n";
        std::cout << "playtime: " << row.playtime << "\n";
    }
}

void unconditional_select_small(sqlpp::mysql::connection& db)
{
    std::cout << "Unconditional select test (small)\n";
    for (auto const& row : db(select(chars.charname).from(chars).unconditionally()))
    {
        std::cout << "charname: " << row.charname << "\n";
    }
}

void conditional_select(sqlpp::mysql::connection& db)
{
    std::cout << "Conditional select test\n";
    for (auto const& row : db(select(all_of(chars)).from(chars).where(chars.charid == 1)))
    {
        std::cout << "charid:" << row.charid << "\n";
        std::cout << "charname: " << row.charname << "\n";
    }
}

void inner_join(sqlpp::mysql::connection& db)
{
    std::cout << "Inner join char_base test\n";
    auto query = db(select(chars.charid, chars.charname, char_history.mhEntrances)
                        .from(chars.inner_join(char_history)
                                  .on(chars.charid == char_history.charid))
                        .unconditionally());

    for (auto const& row : query)
    {
        std::cout << "charid:" << row.charid << "\n";
        std::cout << "charname:" << row.charname << "\n";
        std::cout << "mhEntrances: " << row.mhEntrances << "\n";
    }
}

void update(sqlpp::mysql::connection& db)
{
    std::cout << "Update char_vars test\n";
    db(custom_query(sqlpp::verbatim(
                "INSERT INTO char_vars SET charid = 1, varname = 'test', value = 2 ON DUPLICATE KEY UPDATE value = 2;"))
                .with_result_type_of(sqlpp::insert()));
}

int main()
{
#ifdef _WIN32
    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG);
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_DEBUG);
#endif

    auto db = database_connect();

    unconditional_select(db);
    unconditional_select_small(db);
    conditional_select(db);
    inner_join(db);
    update(db);

    return 0;
}
