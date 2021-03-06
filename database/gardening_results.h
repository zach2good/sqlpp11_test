// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_GARDENING_RESULTS_H
#define XIDB_GARDENING_RESULTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace GardeningResults_
  {
    struct ResultId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "resultId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T resultId;
            T& operator()() { return resultId; }
            const T& operator()() const { return resultId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Seed
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "seed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T seed;
            T& operator()() { return seed; }
            const T& operator()() const { return seed; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Element1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "element1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T element1;
            T& operator()() { return element1; }
            const T& operator()() const { return element1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Element2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "element2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T element2;
            T& operator()() { return element2; }
            const T& operator()() const { return element2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Result
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "result";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T result;
            T& operator()() { return result; }
            const T& operator()() const { return result; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct MinQuantity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "min_quantity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T minQuantity;
            T& operator()() { return minQuantity; }
            const T& operator()() const { return minQuantity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MaxQuantity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "max_quantity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T maxQuantity;
            T& operator()() { return maxQuantity; }
            const T& operator()() const { return maxQuantity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Weight
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "weight";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T weight;
            T& operator()() { return weight; }
            const T& operator()() const { return weight; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace GardeningResults_

  struct GardeningResults: sqlpp::table_t<GardeningResults,
               GardeningResults_::ResultId,
               GardeningResults_::Seed,
               GardeningResults_::Element1,
               GardeningResults_::Element2,
               GardeningResults_::Result,
               GardeningResults_::MinQuantity,
               GardeningResults_::MaxQuantity,
               GardeningResults_::Weight>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "gardening_results";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T gardeningResults;
        T& operator()() { return gardeningResults; }
        const T& operator()() const { return gardeningResults; }
      };
    };
  };
} // namespace xidb
#endif
