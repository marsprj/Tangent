/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_src_2fmessages_2eproto__INCLUDED
#define PROTOBUF_C_src_2fmessages_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Header Header;
typedef struct _Ticket Ticket;
typedef struct _AddrDiscover AddrDiscover;
typedef struct _AddrDiscoverReply AddrDiscoverReply;
typedef struct _Data Data;
typedef struct _FindSuccessor FindSuccessor;
typedef struct _FindSuccessorReply FindSuccessorReply;
typedef struct _Stabilize Stabilize;
typedef struct _StabilizeReply StabilizeReply;
typedef struct _Notify Notify;
typedef struct _Ping Ping;
typedef struct _Pong Pong;


/* --- enums --- */


/* --- messages --- */

struct  _Header
{
  ProtobufCMessage base;
  protobuf_c_boolean has_version;
  uint32_t version;
  uint32_t type;
  ProtobufCBinaryData payload;
};
#define HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&header__descriptor) \
    , 0,0, 0, {0,NULL} }


struct  _Ticket
{
  ProtobufCMessage base;
  uint32_t time;
  ProtobufCBinaryData hash;
};
#define TICKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ticket__descriptor) \
    , 0, {0,NULL} }


struct  _AddrDiscover
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
};
#define ADDR_DISCOVER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&addr_discover__descriptor) \
    , 0,{0,NULL} }


struct  _AddrDiscoverReply
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
  ProtobufCBinaryData addr;
};
#define ADDR_DISCOVER_REPLY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&addr_discover_reply__descriptor) \
    , 0,{0,NULL}, {0,NULL} }


struct  _Data
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
  protobuf_c_boolean has_ttl;
  uint32_t ttl;
  protobuf_c_boolean has_last;
  protobuf_c_boolean last;
  ProtobufCBinaryData data;
};
#define DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data__descriptor) \
    , {0,NULL}, 0,32, 0,0, {0,NULL} }


struct  _FindSuccessor
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
  protobuf_c_boolean has_ttl;
  uint32_t ttl;
  ProtobufCBinaryData addr;
  uint32_t port;
};
#define FIND_SUCCESSOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&find_successor__descriptor) \
    , 0,{0,NULL}, 0,0, {0,NULL}, 0 }


struct  _FindSuccessorReply
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
  ProtobufCBinaryData addr;
  uint32_t port;
};
#define FIND_SUCCESSOR_REPLY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&find_successor_reply__descriptor) \
    , 0,{0,NULL}, {0,NULL}, 0 }


struct  _Stabilize
{
  ProtobufCMessage base;
  ProtobufCBinaryData addr;
  uint32_t port;
};
#define STABILIZE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&stabilize__descriptor) \
    , {0,NULL}, 0 }


struct  _StabilizeReply
{
  ProtobufCMessage base;
  ProtobufCBinaryData addr;
  uint32_t port;
};
#define STABILIZE_REPLY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&stabilize_reply__descriptor) \
    , {0,NULL}, 0 }


struct  _Notify
{
  ProtobufCMessage base;
};
#define NOTIFY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&notify__descriptor) \
     }


struct  _Ping
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
  uint64_t time;
};
#define PING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ping__descriptor) \
    , 0,{0,NULL}, 0 }


struct  _Pong
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ticket;
  ProtobufCBinaryData ticket;
  uint64_t time;
};
#define PONG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pong__descriptor) \
    , 0,{0,NULL}, 0 }


/* Header methods */
void   header__init
                     (Header         *message);
size_t header__get_packed_size
                     (const Header   *message);
size_t header__pack
                     (const Header   *message,
                      uint8_t             *out);
size_t header__pack_to_buffer
                     (const Header   *message,
                      ProtobufCBuffer     *buffer);
Header *
       header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   header__free_unpacked
                     (Header *message,
                      ProtobufCAllocator *allocator);
/* Ticket methods */
void   ticket__init
                     (Ticket         *message);
size_t ticket__get_packed_size
                     (const Ticket   *message);
size_t ticket__pack
                     (const Ticket   *message,
                      uint8_t             *out);
size_t ticket__pack_to_buffer
                     (const Ticket   *message,
                      ProtobufCBuffer     *buffer);
Ticket *
       ticket__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ticket__free_unpacked
                     (Ticket *message,
                      ProtobufCAllocator *allocator);
/* AddrDiscover methods */
void   addr_discover__init
                     (AddrDiscover         *message);
size_t addr_discover__get_packed_size
                     (const AddrDiscover   *message);
size_t addr_discover__pack
                     (const AddrDiscover   *message,
                      uint8_t             *out);
size_t addr_discover__pack_to_buffer
                     (const AddrDiscover   *message,
                      ProtobufCBuffer     *buffer);
AddrDiscover *
       addr_discover__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   addr_discover__free_unpacked
                     (AddrDiscover *message,
                      ProtobufCAllocator *allocator);
/* AddrDiscoverReply methods */
void   addr_discover_reply__init
                     (AddrDiscoverReply         *message);
size_t addr_discover_reply__get_packed_size
                     (const AddrDiscoverReply   *message);
size_t addr_discover_reply__pack
                     (const AddrDiscoverReply   *message,
                      uint8_t             *out);
size_t addr_discover_reply__pack_to_buffer
                     (const AddrDiscoverReply   *message,
                      ProtobufCBuffer     *buffer);
AddrDiscoverReply *
       addr_discover_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   addr_discover_reply__free_unpacked
                     (AddrDiscoverReply *message,
                      ProtobufCAllocator *allocator);
/* Data methods */
void   data__init
                     (Data         *message);
size_t data__get_packed_size
                     (const Data   *message);
size_t data__pack
                     (const Data   *message,
                      uint8_t             *out);
size_t data__pack_to_buffer
                     (const Data   *message,
                      ProtobufCBuffer     *buffer);
Data *
       data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data__free_unpacked
                     (Data *message,
                      ProtobufCAllocator *allocator);
/* FindSuccessor methods */
void   find_successor__init
                     (FindSuccessor         *message);
size_t find_successor__get_packed_size
                     (const FindSuccessor   *message);
size_t find_successor__pack
                     (const FindSuccessor   *message,
                      uint8_t             *out);
size_t find_successor__pack_to_buffer
                     (const FindSuccessor   *message,
                      ProtobufCBuffer     *buffer);
FindSuccessor *
       find_successor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   find_successor__free_unpacked
                     (FindSuccessor *message,
                      ProtobufCAllocator *allocator);
/* FindSuccessorReply methods */
void   find_successor_reply__init
                     (FindSuccessorReply         *message);
size_t find_successor_reply__get_packed_size
                     (const FindSuccessorReply   *message);
size_t find_successor_reply__pack
                     (const FindSuccessorReply   *message,
                      uint8_t             *out);
size_t find_successor_reply__pack_to_buffer
                     (const FindSuccessorReply   *message,
                      ProtobufCBuffer     *buffer);
FindSuccessorReply *
       find_successor_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   find_successor_reply__free_unpacked
                     (FindSuccessorReply *message,
                      ProtobufCAllocator *allocator);
/* Stabilize methods */
void   stabilize__init
                     (Stabilize         *message);
size_t stabilize__get_packed_size
                     (const Stabilize   *message);
size_t stabilize__pack
                     (const Stabilize   *message,
                      uint8_t             *out);
size_t stabilize__pack_to_buffer
                     (const Stabilize   *message,
                      ProtobufCBuffer     *buffer);
Stabilize *
       stabilize__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   stabilize__free_unpacked
                     (Stabilize *message,
                      ProtobufCAllocator *allocator);
/* StabilizeReply methods */
void   stabilize_reply__init
                     (StabilizeReply         *message);
size_t stabilize_reply__get_packed_size
                     (const StabilizeReply   *message);
size_t stabilize_reply__pack
                     (const StabilizeReply   *message,
                      uint8_t             *out);
size_t stabilize_reply__pack_to_buffer
                     (const StabilizeReply   *message,
                      ProtobufCBuffer     *buffer);
StabilizeReply *
       stabilize_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   stabilize_reply__free_unpacked
                     (StabilizeReply *message,
                      ProtobufCAllocator *allocator);
/* Notify methods */
void   notify__init
                     (Notify         *message);
size_t notify__get_packed_size
                     (const Notify   *message);
size_t notify__pack
                     (const Notify   *message,
                      uint8_t             *out);
size_t notify__pack_to_buffer
                     (const Notify   *message,
                      ProtobufCBuffer     *buffer);
Notify *
       notify__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   notify__free_unpacked
                     (Notify *message,
                      ProtobufCAllocator *allocator);
/* Ping methods */
void   ping__init
                     (Ping         *message);
size_t ping__get_packed_size
                     (const Ping   *message);
size_t ping__pack
                     (const Ping   *message,
                      uint8_t             *out);
size_t ping__pack_to_buffer
                     (const Ping   *message,
                      ProtobufCBuffer     *buffer);
Ping *
       ping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ping__free_unpacked
                     (Ping *message,
                      ProtobufCAllocator *allocator);
/* Pong methods */
void   pong__init
                     (Pong         *message);
size_t pong__get_packed_size
                     (const Pong   *message);
size_t pong__pack
                     (const Pong   *message,
                      uint8_t             *out);
size_t pong__pack_to_buffer
                     (const Pong   *message,
                      ProtobufCBuffer     *buffer);
Pong *
       pong__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pong__free_unpacked
                     (Pong *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Header_Closure)
                 (const Header *message,
                  void *closure_data);
typedef void (*Ticket_Closure)
                 (const Ticket *message,
                  void *closure_data);
typedef void (*AddrDiscover_Closure)
                 (const AddrDiscover *message,
                  void *closure_data);
typedef void (*AddrDiscoverReply_Closure)
                 (const AddrDiscoverReply *message,
                  void *closure_data);
typedef void (*Data_Closure)
                 (const Data *message,
                  void *closure_data);
typedef void (*FindSuccessor_Closure)
                 (const FindSuccessor *message,
                  void *closure_data);
typedef void (*FindSuccessorReply_Closure)
                 (const FindSuccessorReply *message,
                  void *closure_data);
typedef void (*Stabilize_Closure)
                 (const Stabilize *message,
                  void *closure_data);
typedef void (*StabilizeReply_Closure)
                 (const StabilizeReply *message,
                  void *closure_data);
typedef void (*Notify_Closure)
                 (const Notify *message,
                  void *closure_data);
typedef void (*Ping_Closure)
                 (const Ping *message,
                  void *closure_data);
typedef void (*Pong_Closure)
                 (const Pong *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor header__descriptor;
extern const ProtobufCMessageDescriptor ticket__descriptor;
extern const ProtobufCMessageDescriptor addr_discover__descriptor;
extern const ProtobufCMessageDescriptor addr_discover_reply__descriptor;
extern const ProtobufCMessageDescriptor data__descriptor;
extern const ProtobufCMessageDescriptor find_successor__descriptor;
extern const ProtobufCMessageDescriptor find_successor_reply__descriptor;
extern const ProtobufCMessageDescriptor stabilize__descriptor;
extern const ProtobufCMessageDescriptor stabilize_reply__descriptor;
extern const ProtobufCMessageDescriptor notify__descriptor;
extern const ProtobufCMessageDescriptor ping__descriptor;
extern const ProtobufCMessageDescriptor pong__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_src_2fmessages_2eproto__INCLUDED */
