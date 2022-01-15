// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_NM_SPAWN_POINTS_H
#define XIDB_NM_SPAWN_POINTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace NmSpawnPoints_
  {
    struct Mobid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mobid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobid;
            T& operator()() { return mobid; }
            const T& operator()() const { return mobid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct Pos
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pos;
            T& operator()() { return pos; }
            const T& operator()() const { return pos; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct PosX
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_x";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posX;
            T& operator()() { return posX; }
            const T& operator()() const { return posX; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct PosY
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_y";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posY;
            T& operator()() { return posY; }
            const T& operator()() const { return posY; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct PosZ
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_z";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posZ;
            T& operator()() { return posZ; }
            const T& operator()() const { return posZ; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
  } // namespace NmSpawnPoints_

  struct NmSpawnPoints: sqlpp::table_t<NmSpawnPoints,
               NmSpawnPoints_::Mobid,
               NmSpawnPoints_::Pos,
               NmSpawnPoints_::PosX,
               NmSpawnPoints_::PosY,
               NmSpawnPoints_::PosZ>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "nm_spawn_points";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T nmSpawnPoints;
        T& operator()() { return nmSpawnPoints; }
        const T& operator()() const { return nmSpawnPoints; }
      };
    };
  };
} // namespace xidb
#endif
