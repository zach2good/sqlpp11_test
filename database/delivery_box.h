// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_DELIVERY_BOX_H
#define XIDB_DELIVERY_BOX_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace DeliveryBox_
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
    struct Charname
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charname";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charname;
            T& operator()() { return charname; }
            const T& operator()() const { return charname; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Box
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "box";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T box;
            T& operator()() { return box; }
            const T& operator()() const { return box; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Slot
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "slot";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T slot;
            T& operator()() { return slot; }
            const T& operator()() const { return slot; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Itemid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemid;
            T& operator()() { return itemid; }
            const T& operator()() const { return itemid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Itemsubid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemsubid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemsubid;
            T& operator()() { return itemsubid; }
            const T& operator()() const { return itemsubid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Quantity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "quantity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T quantity;
            T& operator()() { return quantity; }
            const T& operator()() const { return quantity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Extra
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "extra";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T extra;
            T& operator()() { return extra; }
            const T& operator()() const { return extra; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Senderid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "senderid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T senderid;
            T& operator()() { return senderid; }
            const T& operator()() const { return senderid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Sender
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sender";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sender;
            T& operator()() { return sender; }
            const T& operator()() const { return sender; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Received
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "received";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T received;
            T& operator()() { return received; }
            const T& operator()() const { return received; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct Sent
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sent";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sent;
            T& operator()() { return sent; }
            const T& operator()() const { return sent; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
  } // namespace DeliveryBox_

  struct DeliveryBox: sqlpp::table_t<DeliveryBox,
               DeliveryBox_::Charid,
               DeliveryBox_::Charname,
               DeliveryBox_::Box,
               DeliveryBox_::Slot,
               DeliveryBox_::Itemid,
               DeliveryBox_::Itemsubid,
               DeliveryBox_::Quantity,
               DeliveryBox_::Extra,
               DeliveryBox_::Senderid,
               DeliveryBox_::Sender,
               DeliveryBox_::Received,
               DeliveryBox_::Sent>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "delivery_box";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T deliveryBox;
        T& operator()() { return deliveryBox; }
        const T& operator()() const { return deliveryBox; }
      };
    };
  };
} // namespace xidb
#endif