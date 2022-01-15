// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_GUILD_ITEM_POINTS_H
#define XIDB_GUILD_ITEM_POINTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace GuildItemPoints_
  {
    struct Guildid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "guildid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T guildid;
            T& operator()() { return guildid; }
            const T& operator()() const { return guildid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Itemid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemid;
            T& operator()() { return itemid; }
            const T& operator()() const { return itemid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Rank
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rank";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rank;
            T& operator()() { return rank; }
            const T& operator()() const { return rank; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Points
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "points";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T points;
            T& operator()() { return points; }
            const T& operator()() const { return points; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct MaxPoints
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "max_points";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T maxPoints;
            T& operator()() { return maxPoints; }
            const T& operator()() const { return maxPoints; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Pattern
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pattern";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pattern;
            T& operator()() { return pattern; }
            const T& operator()() const { return pattern; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace GuildItemPoints_

  struct GuildItemPoints: sqlpp::table_t<GuildItemPoints,
               GuildItemPoints_::Guildid,
               GuildItemPoints_::Itemid,
               GuildItemPoints_::Rank,
               GuildItemPoints_::Points,
               GuildItemPoints_::MaxPoints,
               GuildItemPoints_::Pattern>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "guild_item_points";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T guildItemPoints;
        T& operator()() { return guildItemPoints; }
        const T& operator()() const { return guildItemPoints; }
      };
    };
  };
} // namespace xidb
#endif