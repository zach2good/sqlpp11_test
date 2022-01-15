// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_POOLS_H
#define XIDB_MOB_POOLS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobPools_
  {
    struct Poolid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "poolid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T poolid;
            T& operator()() { return poolid; }
            const T& operator()() const { return poolid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
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
    struct PacketName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "packet_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T packetName;
            T& operator()() { return packetName; }
            const T& operator()() const { return packetName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Familyid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "familyid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T familyid;
            T& operator()() { return familyid; }
            const T& operator()() const { return familyid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Modelid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modelid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modelid;
            T& operator()() { return modelid; }
            const T& operator()() const { return modelid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct MJob
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mJob";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mJob;
            T& operator()() { return mJob; }
            const T& operator()() const { return mJob; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct SJob
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sJob";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sJob;
            T& operator()() { return sJob; }
            const T& operator()() const { return sJob; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct CmbSkill
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cmbSkill";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cmbSkill;
            T& operator()() { return cmbSkill; }
            const T& operator()() const { return cmbSkill; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct CmbDelay
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cmbDelay";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cmbDelay;
            T& operator()() { return cmbDelay; }
            const T& operator()() const { return cmbDelay; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct CmbDmgMult
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cmbDmgMult";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cmbDmgMult;
            T& operator()() { return cmbDmgMult; }
            const T& operator()() const { return cmbDmgMult; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Behavior
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "behavior";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T behavior;
            T& operator()() { return behavior; }
            const T& operator()() const { return behavior; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Aggro
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "aggro";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T aggro;
            T& operator()() { return aggro; }
            const T& operator()() const { return aggro; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct TrueDetection
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "true_detection";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T trueDetection;
            T& operator()() { return trueDetection; }
            const T& operator()() const { return trueDetection; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Links
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "links";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T links;
            T& operator()() { return links; }
            const T& operator()() const { return links; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MobType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mobType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobType;
            T& operator()() { return mobType; }
            const T& operator()() const { return mobType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Immunity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "immunity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T immunity;
            T& operator()() { return immunity; }
            const T& operator()() const { return immunity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer>;
    };
    struct NamePrefix
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name_prefix";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T namePrefix;
            T& operator()() { return namePrefix; }
            const T& operator()() const { return namePrefix; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Flag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "flag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T flag;
            T& operator()() { return flag; }
            const T& operator()() const { return flag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct EntityFlags
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "entityFlags";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T entityFlags;
            T& operator()() { return entityFlags; }
            const T& operator()() const { return entityFlags; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Animationsub
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "animationsub";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T animationsub;
            T& operator()() { return animationsub; }
            const T& operator()() const { return animationsub; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct HasSpellScript
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "hasSpellScript";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T hasSpellScript;
            T& operator()() { return hasSpellScript; }
            const T& operator()() const { return hasSpellScript; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct SpellList
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spellList";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellList;
            T& operator()() { return spellList; }
            const T& operator()() const { return spellList; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct Namevis
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "namevis";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T namevis;
            T& operator()() { return namevis; }
            const T& operator()() const { return namevis; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct Roamflag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "roamflag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T roamflag;
            T& operator()() { return roamflag; }
            const T& operator()() const { return roamflag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
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
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct ResistId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "resist_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T resistId;
            T& operator()() { return resistId; }
            const T& operator()() const { return resistId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace MobPools_

  struct MobPools: sqlpp::table_t<MobPools,
               MobPools_::Poolid,
               MobPools_::Name,
               MobPools_::PacketName,
               MobPools_::Familyid,
               MobPools_::Modelid,
               MobPools_::MJob,
               MobPools_::SJob,
               MobPools_::CmbSkill,
               MobPools_::CmbDelay,
               MobPools_::CmbDmgMult,
               MobPools_::Behavior,
               MobPools_::Aggro,
               MobPools_::TrueDetection,
               MobPools_::Links,
               MobPools_::MobType,
               MobPools_::Immunity,
               MobPools_::NamePrefix,
               MobPools_::Flag,
               MobPools_::EntityFlags,
               MobPools_::Animationsub,
               MobPools_::HasSpellScript,
               MobPools_::SpellList,
               MobPools_::Namevis,
               MobPools_::Roamflag,
               MobPools_::SkillListId,
               MobPools_::ResistId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_pools";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobPools;
        T& operator()() { return mobPools; }
        const T& operator()() const { return mobPools; }
      };
    };
  };
} // namespace xidb
#endif
