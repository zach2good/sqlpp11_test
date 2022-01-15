// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SKILL_LISTS_H
#define XIDB_MOB_SKILL_LISTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobSkillLists_
  {
    struct SkillListName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "skill_list_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T skillListName;
            T& operator()() { return skillListName; }
            const T& operator()() const { return skillListName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct SkillListId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "skill_list_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T skillListId;
            T& operator()() { return skillListId; }
            const T& operator()() const { return skillListId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct MobSkillId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillId;
            T& operator()() { return mobSkillId; }
            const T& operator()() const { return mobSkillId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
  } // namespace MobSkillLists_

  struct MobSkillLists: sqlpp::table_t<MobSkillLists,
               MobSkillLists_::SkillListName,
               MobSkillLists_::SkillListId,
               MobSkillLists_::MobSkillId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_skill_lists";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobSkillLists;
        T& operator()() { return mobSkillLists; }
        const T& operator()() const { return mobSkillLists; }
      };
    };
  };
} // namespace xidb
#endif
