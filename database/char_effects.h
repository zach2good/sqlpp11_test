// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_EFFECTS_H
#define XIDB_CHAR_EFFECTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharEffects_
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
    struct Effectid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "effectid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T effectid;
            T& operator()() { return effectid; }
            const T& operator()() const { return effectid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Icon
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "icon";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T icon;
            T& operator()() { return icon; }
            const T& operator()() const { return icon; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Power
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "power";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T power;
            T& operator()() { return power; }
            const T& operator()() const { return power; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Tick
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tick";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tick;
            T& operator()() { return tick; }
            const T& operator()() const { return tick; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Duration
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "duration";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T duration;
            T& operator()() { return duration; }
            const T& operator()() const { return duration; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Subid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "subid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T subid;
            T& operator()() { return subid; }
            const T& operator()() const { return subid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Subpower
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "subpower";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T subpower;
            T& operator()() { return subpower; }
            const T& operator()() const { return subpower; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct Tier
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tier";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tier;
            T& operator()() { return tier; }
            const T& operator()() const { return tier; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Flags
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "flags";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T flags;
            T& operator()() { return flags; }
            const T& operator()() const { return flags; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Timestamp
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "timestamp";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timestamp;
            T& operator()() { return timestamp; }
            const T& operator()() const { return timestamp; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace CharEffects_

  struct CharEffects: sqlpp::table_t<CharEffects,
               CharEffects_::Charid,
               CharEffects_::Effectid,
               CharEffects_::Icon,
               CharEffects_::Power,
               CharEffects_::Tick,
               CharEffects_::Duration,
               CharEffects_::Subid,
               CharEffects_::Subpower,
               CharEffects_::Tier,
               CharEffects_::Flags,
               CharEffects_::Timestamp>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_effects";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charEffects;
        T& operator()() { return charEffects; }
        const T& operator()() const { return charEffects; }
      };
    };
  };
} // namespace xidb
#endif