// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_FISHING_LURE_H
#define XIDB_FISHING_LURE_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace FishingLure_
  {
    struct Lureid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lureid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lureid;
            T& operator()() { return lureid; }
            const T& operator()() const { return lureid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T name;
            T& operator()() { return name; }
            const T& operator()() const { return name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Fishid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fishid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fishid;
            T& operator()() { return fishid; }
            const T& operator()() const { return fishid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Luck
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "luck";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T luck;
            T& operator()() { return luck; }
            const T& operator()() const { return luck; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace FishingLure_

  struct FishingLure: sqlpp::table_t<FishingLure,
               FishingLure_::Lureid,
               FishingLure_::Name,
               FishingLure_::Fishid,
               FishingLure_::Luck>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "fishing_lure";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T fishingLure;
        T& operator()() { return fishingLure; }
        const T& operator()() const { return fishingLure; }
      };
    };
  };
} // namespace xidb
#endif
