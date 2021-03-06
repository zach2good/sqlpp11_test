// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ACCOUNT_IP_RECORD_H
#define XIDB_ACCOUNT_IP_RECORD_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AccountIpRecord_
  {
    struct LoginTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "login_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T loginTime;
            T& operator()() { return loginTime; }
            const T& operator()() const { return loginTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
    struct Accid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "accid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T accid;
            T& operator()() { return accid; }
            const T& operator()() const { return accid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
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
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct ClientIp
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "client_ip";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T clientIp;
            T& operator()() { return clientIp; }
            const T& operator()() const { return clientIp; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
  } // namespace AccountIpRecord_

  struct AccountIpRecord: sqlpp::table_t<AccountIpRecord,
               AccountIpRecord_::LoginTime,
               AccountIpRecord_::Accid,
               AccountIpRecord_::Charid,
               AccountIpRecord_::ClientIp>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "account_ip_record";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T accountIpRecord;
        T& operator()() { return accountIpRecord; }
        const T& operator()() const { return accountIpRecord; }
      };
    };
  };
} // namespace xidb
#endif
