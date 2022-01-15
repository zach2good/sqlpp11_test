// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_SKILL_CAPS_H
#define XIDB_SKILL_CAPS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace SkillCaps_
  {
    struct Level
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "level";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T level;
            T& operator()() { return level; }
            const T& operator()() const { return level; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct R0
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r0";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r0;
            T& operator()() { return r0; }
            const T& operator()() const { return r0; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r1;
            T& operator()() { return r1; }
            const T& operator()() const { return r1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r2;
            T& operator()() { return r2; }
            const T& operator()() const { return r2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R3
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r3";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r3;
            T& operator()() { return r3; }
            const T& operator()() const { return r3; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R4
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r4";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r4;
            T& operator()() { return r4; }
            const T& operator()() const { return r4; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R5
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r5";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r5;
            T& operator()() { return r5; }
            const T& operator()() const { return r5; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R6
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r6";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r6;
            T& operator()() { return r6; }
            const T& operator()() const { return r6; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R7
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r7";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r7;
            T& operator()() { return r7; }
            const T& operator()() const { return r7; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R8
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r8";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r8;
            T& operator()() { return r8; }
            const T& operator()() const { return r8; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R9
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r9";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r9;
            T& operator()() { return r9; }
            const T& operator()() const { return r9; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R10
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r10";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r10;
            T& operator()() { return r10; }
            const T& operator()() const { return r10; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R11
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r11";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r11;
            T& operator()() { return r11; }
            const T& operator()() const { return r11; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R12
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r12";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r12;
            T& operator()() { return r12; }
            const T& operator()() const { return r12; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct R13
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "r13";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T r13;
            T& operator()() { return r13; }
            const T& operator()() const { return r13; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace SkillCaps_

  struct SkillCaps: sqlpp::table_t<SkillCaps,
               SkillCaps_::Level,
               SkillCaps_::R0,
               SkillCaps_::R1,
               SkillCaps_::R2,
               SkillCaps_::R3,
               SkillCaps_::R4,
               SkillCaps_::R5,
               SkillCaps_::R6,
               SkillCaps_::R7,
               SkillCaps_::R8,
               SkillCaps_::R9,
               SkillCaps_::R10,
               SkillCaps_::R11,
               SkillCaps_::R12,
               SkillCaps_::R13>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "skill_caps";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T skillCaps;
        T& operator()() { return skillCaps; }
        const T& operator()() const { return skillCaps; }
      };
    };
  };
} // namespace xidb
#endif