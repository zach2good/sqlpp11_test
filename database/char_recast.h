// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_RECAST_H
#define XIDB_CHAR_RECAST_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharRecast_
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
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct Time
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T time;
            T& operator()() { return time; }
            const T& operator()() const { return time; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer>;
    };
    struct Recast
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "recast";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T recast;
            T& operator()() { return recast; }
            const T& operator()() const { return recast; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
  } // namespace CharRecast_

  struct CharRecast: sqlpp::table_t<CharRecast,
               CharRecast_::Charid,
               CharRecast_::Id,
               CharRecast_::Time,
               CharRecast_::Recast>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_recast";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charRecast;
        T& operator()() { return charRecast; }
        const T& operator()() const { return charRecast; }
      };
    };
  };
} // namespace xidb
#endif
