// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_CHOCOBOS_H
#define XIDB_CHAR_CHOCOBOS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharChocobos_
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
    struct FirstName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "first_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T firstName;
            T& operator()() { return firstName; }
            const T& operator()() const { return firstName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct LastName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "last_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lastName;
            T& operator()() { return lastName; }
            const T& operator()() const { return lastName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Sex
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sex";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sex;
            T& operator()() { return sex; }
            const T& operator()() const { return sex; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint, sqlpp::tag::can_be_null>;
    };
    struct Created
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "created";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T created;
            T& operator()() { return created; }
            const T& operator()() const { return created; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
    struct LastUpdate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "last_update";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lastUpdate;
            T& operator()() { return lastUpdate; }
            const T& operator()() const { return lastUpdate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
    struct Stage
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "stage";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T stage;
            T& operator()() { return stage; }
            const T& operator()() const { return stage; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Location
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "location";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T location;
            T& operator()() { return location; }
            const T& operator()() const { return location; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Colour
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "colour";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T colour;
            T& operator()() { return colour; }
            const T& operator()() const { return colour; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct DominantGene
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dominant_gene";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dominantGene;
            T& operator()() { return dominantGene; }
            const T& operator()() const { return dominantGene; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct RecessiveGene
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "recessive_gene";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T recessiveGene;
            T& operator()() { return recessiveGene; }
            const T& operator()() const { return recessiveGene; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Strength
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "strength";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T strength;
            T& operator()() { return strength; }
            const T& operator()() const { return strength; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Endurance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "endurance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T endurance;
            T& operator()() { return endurance; }
            const T& operator()() const { return endurance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Discernment
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "discernment";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T discernment;
            T& operator()() { return discernment; }
            const T& operator()() const { return discernment; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Receptivity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "receptivity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T receptivity;
            T& operator()() { return receptivity; }
            const T& operator()() const { return receptivity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Affection
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "affection";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T affection;
            T& operator()() { return affection; }
            const T& operator()() const { return affection; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Energy
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "energy";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T energy;
            T& operator()() { return energy; }
            const T& operator()() const { return energy; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Satisfaction
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "satisfaction";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T satisfaction;
            T& operator()() { return satisfaction; }
            const T& operator()() const { return satisfaction; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Conditions
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "conditions";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T conditions;
            T& operator()() { return conditions; }
            const T& operator()() const { return conditions; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Ability1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ability1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ability1;
            T& operator()() { return ability1; }
            const T& operator()() const { return ability1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Ability2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ability2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ability2;
            T& operator()() { return ability2; }
            const T& operator()() const { return ability2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Personality
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "personality";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T personality;
            T& operator()() { return personality; }
            const T& operator()() const { return personality; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct WeatherPreference
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "weather_preference";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T weatherPreference;
            T& operator()() { return weatherPreference; }
            const T& operator()() const { return weatherPreference; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Hunger
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "hunger";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T hunger;
            T& operator()() { return hunger; }
            const T& operator()() const { return hunger; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct CarePlan1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "care_plan_1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T carePlan1;
            T& operator()() { return carePlan1; }
            const T& operator()() const { return carePlan1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct CarePlan2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "care_plan_2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T carePlan2;
            T& operator()() { return carePlan2; }
            const T& operator()() const { return carePlan2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct CarePlan3
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "care_plan_3";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T carePlan3;
            T& operator()() { return carePlan3; }
            const T& operator()() const { return carePlan3; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct CarePlan4
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "care_plan_4";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T carePlan4;
            T& operator()() { return carePlan4; }
            const T& operator()() const { return carePlan4; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
  } // namespace CharChocobos_

  struct CharChocobos: sqlpp::table_t<CharChocobos,
               CharChocobos_::Charid,
               CharChocobos_::FirstName,
               CharChocobos_::LastName,
               CharChocobos_::Sex,
               CharChocobos_::Created,
               CharChocobos_::LastUpdate,
               CharChocobos_::Stage,
               CharChocobos_::Location,
               CharChocobos_::Colour,
               CharChocobos_::DominantGene,
               CharChocobos_::RecessiveGene,
               CharChocobos_::Strength,
               CharChocobos_::Endurance,
               CharChocobos_::Discernment,
               CharChocobos_::Receptivity,
               CharChocobos_::Affection,
               CharChocobos_::Energy,
               CharChocobos_::Satisfaction,
               CharChocobos_::Conditions,
               CharChocobos_::Ability1,
               CharChocobos_::Ability2,
               CharChocobos_::Personality,
               CharChocobos_::WeatherPreference,
               CharChocobos_::Hunger,
               CharChocobos_::CarePlan1,
               CharChocobos_::CarePlan2,
               CharChocobos_::CarePlan3,
               CharChocobos_::CarePlan4>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_chocobos";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charChocobos;
        T& operator()() { return charChocobos; }
        const T& operator()() const { return charChocobos; }
      };
    };
  };
} // namespace xidb
#endif