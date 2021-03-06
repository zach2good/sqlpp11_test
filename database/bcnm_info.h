// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_BCNM_INFO_H
#define XIDB_BCNM_INFO_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace BcnmInfo_
  {
    struct BcnmId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "bcnmId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T bcnmId;
            T& operator()() { return bcnmId; }
            const T& operator()() const { return bcnmId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct ZoneId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "zoneId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T zoneId;
            T& operator()() { return zoneId; }
            const T& operator()() const { return zoneId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
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
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct FastestName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fastestName";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fastestName;
            T& operator()() { return fastestName; }
            const T& operator()() const { return fastestName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct FastestPartySize
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fastestPartySize";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fastestPartySize;
            T& operator()() { return fastestPartySize; }
            const T& operator()() const { return fastestPartySize; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct FastestTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fastestTime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fastestTime;
            T& operator()() { return fastestTime; }
            const T& operator()() const { return fastestTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct TimeLimit
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "timeLimit";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timeLimit;
            T& operator()() { return timeLimit; }
            const T& operator()() const { return timeLimit; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct LevelCap
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "levelCap";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T levelCap;
            T& operator()() { return levelCap; }
            const T& operator()() const { return levelCap; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct PartySize
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "partySize";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T partySize;
            T& operator()() { return partySize; }
            const T& operator()() const { return partySize; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct LootDropId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lootDropId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lootDropId;
            T& operator()() { return lootDropId; }
            const T& operator()() const { return lootDropId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Rules
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rules";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rules;
            T& operator()() { return rules; }
            const T& operator()() const { return rules; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct IsMission
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "isMission";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T isMission;
            T& operator()() { return isMission; }
            const T& operator()() const { return isMission; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace BcnmInfo_

  struct BcnmInfo: sqlpp::table_t<BcnmInfo,
               BcnmInfo_::BcnmId,
               BcnmInfo_::ZoneId,
               BcnmInfo_::Name,
               BcnmInfo_::FastestName,
               BcnmInfo_::FastestPartySize,
               BcnmInfo_::FastestTime,
               BcnmInfo_::TimeLimit,
               BcnmInfo_::LevelCap,
               BcnmInfo_::PartySize,
               BcnmInfo_::LootDropId,
               BcnmInfo_::Rules,
               BcnmInfo_::IsMission>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "bcnm_info";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T bcnmInfo;
        T& operator()() { return bcnmInfo; }
        const T& operator()() const { return bcnmInfo; }
      };
    };
  };
} // namespace xidb
#endif
