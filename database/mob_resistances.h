// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_RESISTANCES_H
#define XIDB_MOB_RESISTANCES_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobResistances_
  {
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
    struct SlashSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "slash_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T slashSdt;
            T& operator()() { return slashSdt; }
            const T& operator()() const { return slashSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct PierceSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pierce_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pierceSdt;
            T& operator()() { return pierceSdt; }
            const T& operator()() const { return pierceSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct H2HSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "h2h_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T h2HSdt;
            T& operator()() { return h2HSdt; }
            const T& operator()() const { return h2HSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct ImpactSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "impact_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T impactSdt;
            T& operator()() { return impactSdt; }
            const T& operator()() const { return impactSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct FireSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fire_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fireSdt;
            T& operator()() { return fireSdt; }
            const T& operator()() const { return fireSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct IceSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ice_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T iceSdt;
            T& operator()() { return iceSdt; }
            const T& operator()() const { return iceSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct WindSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "wind_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T windSdt;
            T& operator()() { return windSdt; }
            const T& operator()() const { return windSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct EarthSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "earth_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T earthSdt;
            T& operator()() { return earthSdt; }
            const T& operator()() const { return earthSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct LightningSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lightning_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lightningSdt;
            T& operator()() { return lightningSdt; }
            const T& operator()() const { return lightningSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct WaterSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "water_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T waterSdt;
            T& operator()() { return waterSdt; }
            const T& operator()() const { return waterSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct LightSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "light_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lightSdt;
            T& operator()() { return lightSdt; }
            const T& operator()() const { return lightSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct DarkSdt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dark_sdt";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T darkSdt;
            T& operator()() { return darkSdt; }
            const T& operator()() const { return darkSdt; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct FireRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fire_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fireRes;
            T& operator()() { return fireRes; }
            const T& operator()() const { return fireRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct IceRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ice_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T iceRes;
            T& operator()() { return iceRes; }
            const T& operator()() const { return iceRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct WindRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "wind_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T windRes;
            T& operator()() { return windRes; }
            const T& operator()() const { return windRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct EarthRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "earth_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T earthRes;
            T& operator()() { return earthRes; }
            const T& operator()() const { return earthRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct LightningRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lightning_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lightningRes;
            T& operator()() { return lightningRes; }
            const T& operator()() const { return lightningRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct WaterRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "water_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T waterRes;
            T& operator()() { return waterRes; }
            const T& operator()() const { return waterRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct LightRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "light_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lightRes;
            T& operator()() { return lightRes; }
            const T& operator()() const { return lightRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct DarkRes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dark_res";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T darkRes;
            T& operator()() { return darkRes; }
            const T& operator()() const { return darkRes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
  } // namespace MobResistances_

  struct MobResistances: sqlpp::table_t<MobResistances,
               MobResistances_::ResistId,
               MobResistances_::Name,
               MobResistances_::SlashSdt,
               MobResistances_::PierceSdt,
               MobResistances_::H2HSdt,
               MobResistances_::ImpactSdt,
               MobResistances_::FireSdt,
               MobResistances_::IceSdt,
               MobResistances_::WindSdt,
               MobResistances_::EarthSdt,
               MobResistances_::LightningSdt,
               MobResistances_::WaterSdt,
               MobResistances_::LightSdt,
               MobResistances_::DarkSdt,
               MobResistances_::FireRes,
               MobResistances_::IceRes,
               MobResistances_::WindRes,
               MobResistances_::EarthRes,
               MobResistances_::LightningRes,
               MobResistances_::WaterRes,
               MobResistances_::LightRes,
               MobResistances_::DarkRes>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_resistances";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobResistances;
        T& operator()() { return mobResistances; }
        const T& operator()() const { return mobResistances; }
      };
    };
  };
} // namespace xidb
#endif
