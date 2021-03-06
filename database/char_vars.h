// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_VARS_H
#define XIDB_CHAR_VARS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharVars_
  {
    struct Charid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charid;
            T& operator()() { return charid; }
            const T& operator()() const { return charid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Varname
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "varname";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T varname;
            T& operator()() { return varname; }
            const T& operator()() const { return varname; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Value
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "value";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T value;
            T& operator()() { return value; }
            const T& operator()() const { return value; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
  } // namespace CharVars_

  struct CharVars: sqlpp::table_t<CharVars,
               CharVars_::Charid,
               CharVars_::Varname,
               CharVars_::Value>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_vars";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charVars;
        T& operator()() { return charVars; }
        const T& operator()() const { return charVars; }
      };
    };
  };
} // namespace xidb
#endif
