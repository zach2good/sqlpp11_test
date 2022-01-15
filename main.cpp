#include <memory>

#ifdef _WIN32
#include <crtdbg.h>
#endif

#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include "database/chars.h"
#include "database/char_history.h"

using namespace xidb;
namespace sql = sqlpp::mysql;

constexpr Chars chars{};
constexpr CharHistory char_history{};

sql::connection database_connect()
{
    auto config      = std::make_shared<sql::connection_config>();
    config->host     = "localhost";
    config->user     = "root";
    config->password = "root";
    config->database = "xidb";
    config->port     = 3306;
    config->debug    = true;

    sql::connection db(config);
    return db;
}

void unconditional_select(sql::connection& db)
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

void unconditional_select_small(sql::connection& db)
{
    std::cout << "Unconditional select test (small)\n";
    for (auto const& row : db(select(chars.charname).from(chars).unconditionally()))
    {
        std::cout << "charname: " << row.charname << "\n";
    }
}

void conditional_select(sql::connection& db)
{
    std::cout << "Conditional select test\n";
    for (auto const& row : db(select(all_of(chars)).from(chars).where(chars.charid == 1)))
    {
        std::cout << "charid:" << row.charid << "\n";
        std::cout << "charname: " << row.charname << "\n";
    }
}

void inner_join(sql::connection& db)
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

    return 0;
}
