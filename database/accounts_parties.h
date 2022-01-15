// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ACCOUNTS_PARTIES_H
#define XIDB_ACCOUNTS_PARTIES_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AccountsParties_
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
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Partyid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "partyid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T partyid;
            T& operator()() { return partyid; }
            const T& operator()() const { return partyid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Partyflag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "partyflag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T partyflag;
            T& operator()() { return partyflag; }
            const T& operator()() const { return partyflag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Allianceid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "allianceid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T allianceid;
            T& operator()() { return allianceid; }
            const T& operator()() const { return allianceid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Timestamp
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "timestamp";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timestamp;
            T& operator()() { return timestamp; }
            const T& operator()() const { return timestamp; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
  } // namespace AccountsParties_

  struct AccountsParties: sqlpp::table_t<AccountsParties,
               AccountsParties_::Charid,
               AccountsParties_::Partyid,
               AccountsParties_::Partyflag,
               AccountsParties_::Allianceid,
               AccountsParties_::Timestamp>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "accounts_parties";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T accountsParties;
        T& operator()() { return accountsParties; }
        const T& operator()() const { return accountsParties; }
      };
    };
  };
} // namespace xidb
#endif