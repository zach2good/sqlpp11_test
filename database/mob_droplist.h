// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_MOB_DROPLIST_H
#define XIDB_MOB_DROPLIST_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobDroplist_
  {
    struct DropId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dropId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dropId;
            T& operator()() { return dropId; }
            const T& operator()() const { return dropId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct DropType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dropType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dropType;
            T& operator()() { return dropType; }
            const T& operator()() const { return dropType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct GroupId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "groupId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T groupId;
            T& operator()() { return groupId; }
            const T& operator()() const { return groupId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct GroupRate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "groupRate";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T groupRate;
            T& operator()() { return groupRate; }
            const T& operator()() const { return groupRate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct ItemId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemId;
            T& operator()() { return itemId; }
            const T& operator()() const { return itemId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct ItemRate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemRate";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemRate;
            T& operator()() { return itemRate; }
            const T& operator()() const { return itemRate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace MobDroplist_

  struct MobDroplist: sqlpp::table_t<MobDroplist,
               MobDroplist_::DropId,
               MobDroplist_::DropType,
               MobDroplist_::GroupId,
               MobDroplist_::GroupRate,
               MobDroplist_::ItemId,
               MobDroplist_::ItemRate>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_droplist";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobDroplist;
        T& operator()() { return mobDroplist; }
        const T& operator()() const { return mobDroplist; }
      };
    };
  };
} // namespace xidb
#endif