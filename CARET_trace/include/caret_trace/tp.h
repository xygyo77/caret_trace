// Copyright 2021 Research Institute of Systems Planning, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Provide fake header guard for cpplint
#undef CARET_TRACE__TP_H_
#ifndef CARET_TRACE__TP_H_
#define CARET_TRACE__TP_H_

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER ros2_caret

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "caret_trace/tp.h"

#if !defined(_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TP_H

// clang-format off

#include <lttng/tracepoint.h>
#include <lttng/tracepoint-event.h>

#define LTTNG_UST__TP_EXVAR46(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x, \
                              A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V)	\
                              b,d,f,h,j,l,n,p,r,t,v,x, \
                              B,D,F,H,J,L,N,P,R,T,V
#define LTTNG_UST__TP_EXDATA_VAR46(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x, \
                                   A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V) \
                                   __tp_data,b,d,f,h,j,l,n,p,r,t,v,x, \
                                             B,D,F,H,J,L,N,P,R,T,V

#define LTTNG_UST__TP_EXPROTO46(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x, \
                                A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V) \
                                a b,c d,e f,g h,i j,k l,m n,o p,q r,s t,u v,w x, \
                                A B,C D,E F,G H,I J,K L,M N,O P,Q R,S T,U V
#define LTTNG_UST__TP_EXDATA_PROTO46(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x, \
                                     A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V) \
                                     void *__tp_data,a b,c d,e f,g h,i j,k l,m n,o p,q r,s t,u v,w x, \
                                                     A B,C D,E F,G H,I J,K L,M N,O P,Q R,S T,U V

#undef LTTNG_UST__TP_NARGS
#undef LTTNG_UST___TP_NARGS
#undef LTTNG_UST__TP_PROTO_N
#undef LTTNG_UST__TP_VAR_N
#undef LTTNG_UST__TP_DATA_PROTO_N
#undef LTTNG_UST__TP_DATA_VAR_N
#undef LTTNG_UST__TP_ARGS_PROTO
#undef LTTNG_UST__TP_ARGS_VAR
#undef LTTNG_UST__TP_ARGS_DATA_PROTO
#undef LTTNG_UST__TP_ARGS_DATA_VAR
#undef LTTNG_UST__TP_PARAMS

#define LTTNG_UST__TP_NARGS(...)		LTTNG_UST___TP_NARGS(__VA_ARGS__, 50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27, \
                                                                      26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)
#define LTTNG_UST___TP_NARGS(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26, \
                              _27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50, N, ...)	N
#define LTTNG_UST__TP_PROTO_N(N, ...)		LTTNG_UST__TP_PARAMS(LTTNG_UST__TP_COMBINE_TOKENS(LTTNG_UST__TP_EXPROTO, N)(__VA_ARGS__))
#define LTTNG_UST__TP_VAR_N(N, ...)		LTTNG_UST__TP_PARAMS(LTTNG_UST__TP_COMBINE_TOKENS(LTTNG_UST__TP_EXVAR, N)(__VA_ARGS__))
#define LTTNG_UST__TP_DATA_PROTO_N(N, ...)	LTTNG_UST__TP_PARAMS(LTTNG_UST__TP_COMBINE_TOKENS(LTTNG_UST__TP_EXDATA_PROTO, N)(__VA_ARGS__))
#define LTTNG_UST__TP_DATA_VAR_N(N, ...)	LTTNG_UST__TP_PARAMS(LTTNG_UST__TP_COMBINE_TOKENS(LTTNG_UST__TP_EXDATA_VAR, N)(__VA_ARGS__))
#define LTTNG_UST__TP_ARGS_PROTO(...)		LTTNG_UST__TP_PROTO_N(LTTNG_UST__TP_NARGS(0, ##__VA_ARGS__), ##__VA_ARGS__)
#define LTTNG_UST__TP_ARGS_VAR(...)		LTTNG_UST__TP_VAR_N(LTTNG_UST__TP_NARGS(0, ##__VA_ARGS__), ##__VA_ARGS__)
#define LTTNG_UST__TP_ARGS_DATA_PROTO(...)	LTTNG_UST__TP_DATA_PROTO_N(LTTNG_UST__TP_NARGS(0, ##__VA_ARGS__), ##__VA_ARGS__)
#define LTTNG_UST__TP_ARGS_DATA_VAR(...)	LTTNG_UST__TP_DATA_VAR_N(LTTNG_UST__TP_NARGS(0, ##__VA_ARGS__), ##__VA_ARGS__)
#define LTTNG_UST__TP_PARAMS(...)		__VA_ARGS__


TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  on_data_available,
  TP_ARGS(
    const uint64_t, source_stamp_arg
  ),
  TP_FIELDS(
    ctf_integer(const uint64_t, source_stamp, source_stamp_arg)
  )
)

#ifdef ROS_DISTRO_JAZZY
TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  dds_write,
  TP_ARGS(
    const void *, rmw_publisher_handle_arg,
    const void *, message_arg,
    int64_t, timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, rmw_publisher_handle, rmw_publisher_handle_arg)
    ctf_integer_hex(const void *, message, message_arg)
    ctf_integer(const int64_t, timestamp, timestamp_arg)
  )
)
#else
TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  dds_write,
  TP_ARGS(
    const void *, message_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, message, message_arg)
  )
)
#endif

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  dds_bind_addr_to_stamp,
  TP_ARGS(
    const void *, addr_arg,
    const uint64_t, source_stamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, addr, addr_arg)
    ctf_integer(const uint64_t *, source_stamp, source_stamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  dds_bind_addr_to_addr,
  TP_ARGS(
    const void *, addr_from_arg,
    const void *, addr_to_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, addr_from, addr_from_arg)
    ctf_integer_hex(const void *, addr_to, addr_to_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rmw_implementation,
  TP_ARGS(
    const char *, rmw_impl_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_string(rmw_impl, rmw_impl_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  callback_group_to_executor_entity_collector,
  TP_ARGS(
    const void *, entities_collector_addr_arg,
    const void *, callback_group_addr_arg,
    const char *, group_type_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, entities_collector_addr,
      entities_collector_addr_arg)
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_string(group_type_name, group_type_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  executor_entity_collector_to_executor,
  TP_ARGS(
    const void *, executor_addr_arg,
    const void *, entities_collector_addr_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, executor_addr, executor_addr_arg)
    ctf_integer_hex(const void *, entities_collector_addr,
      entities_collector_addr_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  construct_executor,
  TP_ARGS(
    const void *, executor_addr_arg,
    const char *, executor_type_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, executor_addr, executor_addr_arg)
    ctf_string(executor_type_name, executor_type_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  construct_static_executor,
  TP_ARGS(
    const void *, executor_addr_arg,
    const void *, entities_collector_addr_arg,
    const char *, executor_type_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, executor_addr, executor_addr_arg)
    ctf_integer_hex(const void *, entities_collector_addr, entities_collector_addr_arg)
    ctf_string(executor_type_name, executor_type_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  add_callback_group,
  TP_ARGS(
    const void *, executor_addr_arg,
    const void *, callback_group_addr_arg,
    const char *, group_type_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, executor_addr, executor_addr_arg)
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_string(group_type_name, group_type_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  add_callback_group_static_executor,
  TP_ARGS(
    const void *, entities_collector_addr_arg,
    const void *, callback_group_addr_arg,
    const char *, group_type_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, entities_collector_addr, entities_collector_addr_arg)
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_string(group_type_name, group_type_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  callback_group_add_timer,
  TP_ARGS(
    const void *, callback_group_addr_arg,
    const void *, timer_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_integer_hex(const void *, timer_handle, timer_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  callback_group_add_subscription,
  TP_ARGS(
    const void *, callback_group_addr_arg,
    const void *, subscription_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_integer_hex(const void *, subscription_handle, subscription_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  callback_group_add_service,
  TP_ARGS(
    const void *, callback_group_addr_arg,
    const void *, service_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_integer_hex(const void *, service_handle, service_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  callback_group_add_client,
  TP_ARGS(
    const void *, callback_group_addr_arg,
    const void *, client_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, callback_group_addr, callback_group_addr_arg)
    ctf_integer_hex(const void *, client_handle, client_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  sim_time,
  TP_ARGS(
    const uint64_t, stamp_arg
  ),
  TP_FIELDS(
    ctf_integer(const uint64_t, stamp, stamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  caret_init,
  TP_ARGS(
    int64_t, clock_offset_arg,
    const char *, distribution_arg
  ),
  TP_FIELDS(
    ctf_integer(const int64_t, clock_offset, clock_offset_arg)
    ctf_string(distribution, distribution_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_init,
  TP_ARGS(
    const void *, context_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, context_handle, context_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_node_init,
  TP_ARGS(
    const void *, node_handle_arg,
    const void *, rmw_handle_arg,
    const char *, node_name_arg,
    const char *, namespace_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, rmw_handle, rmw_handle_arg)
    ctf_string(node_name, node_name_arg)
    ctf_string(namespace, namespace_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_publisher_init,
  TP_ARGS(
    const void *, publisher_handle_arg,
    const void *, node_handle_arg,
    const void *, rmw_publisher_handle_arg,
    const char *, topic_name_arg,
    const size_t, queue_depth_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, publisher_handle, publisher_handle_arg)
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, rmw_publisher_handle, rmw_publisher_handle_arg)
    ctf_string(topic_name, topic_name_arg)
    ctf_integer(const size_t, queue_depth, queue_depth_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_subscription_init,
  TP_ARGS(
    const void *, subscription_handle_arg,
    const void *, node_handle_arg,
    const void *, rmw_subscription_handle_arg,
    const char *, topic_name_arg,
    const size_t, queue_depth_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, subscription_handle, subscription_handle_arg)
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, rmw_subscription_handle, rmw_subscription_handle_arg)
    ctf_string(topic_name, topic_name_arg)
    ctf_integer(const size_t, queue_depth, queue_depth_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_subscription_init,
  TP_ARGS(
    const void *, subscription_handle_arg,
    const void *, subscription_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, subscription_handle, subscription_handle_arg)
    ctf_integer_hex(const void *, subscription, subscription_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_subscription_callback_added,
  TP_ARGS(
    const void *, subscription_arg,
    const void *, callback_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, subscription, subscription_arg)
    ctf_integer_hex(const void *, callback, callback_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)


TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_timer_init,
  TP_ARGS(
    const void *, timer_handle_arg,
    int64_t, period_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, timer_handle, timer_handle_arg)
    ctf_integer(const int64_t, period, period_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_timer_callback_added,
  TP_ARGS(
    const void *, timer_handle_arg,
    const void *, callback_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, timer_handle, timer_handle_arg)
    ctf_integer_hex(const void *, callback, callback_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_timer_link_node,
  TP_ARGS(
    const void *, timer_handle_arg,
    const void *, node_handle_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, timer_handle, timer_handle_arg)
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_callback_register,
  TP_ARGS(
    const void *, callback_arg,
    const char *, symbol_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, callback, callback_arg)
    ctf_string(symbol, symbol_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)


TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_service_init,
  TP_ARGS(
    const void *, service_handle_arg,
    const void *, node_handle_arg,
    const void *, rmw_service_handle_arg,
    const char *, service_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, service_handle, service_handle_arg)
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, rmw_service_handle, rmw_service_handle_arg)
    ctf_string(service_name, service_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_service_callback_added,
  TP_ARGS(
    const void *, service_handle_arg,
    const void *, callback_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, service_handle, service_handle_arg)
    ctf_integer_hex(const void *, callback, callback_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_client_init,
  TP_ARGS(
    const void *, client_handle_arg,
    const void *, node_handle_arg,
    const void *, rmw_client_handle_arg,
    const char *, service_name_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, client_handle, client_handle_arg)
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, rmw_client_handle, rmw_client_handle_arg)
    ctf_string(service_name, service_name_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rcl_lifecycle_state_machine_init,
  TP_ARGS(
    const void *, node_handle_arg,
    const void *, state_machine_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, node_handle, node_handle_arg)
    ctf_integer_hex(const void *, state_machine, state_machine_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_ipb_to_subscription,
  TP_ARGS(
    const void *, ipb_arg,
    const void *, subscription_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, ipb, ipb_arg)
    ctf_integer_hex(const void *, subscription, subscription_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_buffer_to_ipb,
  TP_ARGS(
    const void *, buffer_arg,
    const void *, ipb_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, buffer, buffer_arg)
    ctf_integer_hex(const void *, ipb, ipb_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  rclcpp_construct_ring_buffer,
  TP_ARGS(
    const void *, buffer_arg,
    const uint64_t, capacity_arg,
    int64_t, init_timestamp_arg
  ),
  TP_FIELDS(
    ctf_integer_hex(const void *, buffer, buffer_arg)
    ctf_integer(const uint64_t, capacity, capacity_arg)
    ctf_integer(const int64_t, init_timestamp, init_timestamp_arg)
  )
)

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  add_cpu_info,
  TP_ARGS(
    // get_next_ready
    uint16_t, get_next_real_sec_arg,
    int32_t, get_next_real_nsec_arg,
    uint16_t, get_next_cpu_sec_arg,
    int32_t, get_next_cpu_nsec_arg,
    uint16_t, get_next_vctsw_arg,
    uint16_t, get_next_nvctsw_arg,
    uint16_t, get_next_count_arg,
    // callback_start
    const void *, cb_start_callback_arg,
    const int8_t, cb_start_is_intra_process_arg,
    uint16_t, cb_start_real_sec_arg,
    int32_t, cb_start_real_nsec_arg,
    uint16_t, cb_start_cpu_sec_arg,
    int32_t, cb_start_cpu_nsec_arg,
    uint16_t, cb_start_vctsw_arg,
    uint16_t, cb_start_nvctsw_arg,
    uint16_t, cb_start_count_arg,
    // callback_end
    const void *, cb_end_callback_arg,
    uint16_t, cb_end_real_sec_arg,
    int32_t, cb_end_real_nsec_arg,
    uint16_t, cb_end_cpu_sec_arg,
    int32_t, cb_end_cpu_nsec_arg,
    uint16_t, cb_end_vctsw_arg,
    uint16_t, cb_end_nvctsw_arg
  ),
  TP_FIELDS(
    // get_next_ready
    ctf_integer(uint16_t, gn_rs, get_next_real_sec_arg)
    ctf_integer(int32_t, gn_rns, get_next_real_nsec_arg)
    ctf_integer(uint16_t, gn_cs, get_next_cpu_sec_arg)
    ctf_integer(int32_t, gn_cns, get_next_cpu_nsec_arg)
    ctf_integer(uint16_t, gn_ctx, get_next_vctsw_arg)
    ctf_integer(uint16_t, gn_nctx, get_next_nvctsw_arg)
    ctf_integer(uint16_t, gn_ct, get_next_count_arg)
    // callback_start
    ctf_integer_hex(const void *, st_cb, cb_start_callback_arg)
    ctf_integer(int16_t, st_op, cb_start_is_intra_process_arg)
    ctf_integer(uint16_t, st_rs, cb_start_real_sec_arg)
    ctf_integer(int32_t, st_rns, cb_start_real_nsec_arg)
    ctf_integer(uint16_t, st_cs, cb_start_cpu_sec_arg)
    ctf_integer(int32_t, st_cns, cb_start_cpu_nsec_arg)
    ctf_integer(uint16_t, st_ctx, cb_start_vctsw_arg)
    ctf_integer(uint16_t, st_nctx, cb_start_nvctsw_arg)
    ctf_integer(uint16_t, st_ct, cb_start_count_arg)
    // callback_end
    ctf_integer_hex(const void *, ed_cb, cb_end_callback_arg)
    ctf_integer(uint16_t, ed_rs, cb_end_real_sec_arg)
    ctf_integer(int32_t, ed_rns, cb_end_real_nsec_arg)
    ctf_integer(uint16_t, ed_cs, cb_end_cpu_sec_arg)
    ctf_integer(int32_t, ed_cns, cb_end_cpu_nsec_arg)
    ctf_integer(uint16_t, ed_ctx, cb_end_vctsw_arg)
    ctf_integer(uint16_t, ed_nctx, cb_end_nvctsw_arg)
  )
)

// clang-format on

#endif /* _TP_H */

#endif  // CARET_TRACE__TP_H_
