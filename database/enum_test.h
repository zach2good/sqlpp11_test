// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_ENUM_TEST_H
#define XIDB_ENUM_TEST_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace EnumTest_
  {
    struct EnumFld
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "enum_fld";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T enumFld;
            T& operator()() { return enumFld; }
            const T& operator()() const { return enumFld; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
  } // namespace EnumTest_

  struct EnumTest: sqlpp::table_t<EnumTest,
               EnumTest_::EnumFld>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "enum_test";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T enumTest;
        T& operator()() { return enumTest; }
        const T& operator()() const { return enumTest; }
      };
    };
  };
} // namespace xidb
#endif
