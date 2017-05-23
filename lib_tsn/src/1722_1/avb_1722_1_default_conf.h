// Copyright (c) 2011-2017, XMOS Ltd, All rights reserved
#ifndef AVB_1722_1_DEFAULT_CONF_H_
#define AVB_1722_1_DEFAULT_CONF_H_

/* Must include avb_conf.h as it may redefine the default defines here */
#include "default_avb_conf.h"

#ifndef AEM_GENERATE_DESCRIPTORS_ON_FLY
#define AEM_GENERATE_DESCRIPTORS_ON_FLY 1
#endif

#if AVB_ENABLE_1722_1
#ifndef AVB_1722_1_AEM_ENABLED
#define AVB_1722_1_AEM_ENABLED 1
#endif
#else
#ifndef AVB_1722_1_AEM_ENABLED
#define AVB_1722_1_AEM_ENABLED 0
#endif
#endif

#ifndef AVB_1722_1_CONTROLLER_ENABLED
#define AVB_1722_1_CONTROLLER_ENABLED 1
#endif

#ifndef AVB_1722_1_TALKER_ENABLED
#if AVB_NUM_SOURCES > 0
#define AVB_1722_1_TALKER_ENABLED 1
#else
#define AVB_1722_1_TALKER_ENABLED 0
#endif
#endif

#ifndef AVB_1722_1_LISTENER_ENABLED
#if AVB_NUM_SINKS > 0
#define AVB_1722_1_LISTENER_ENABLED 1
#else
#define AVB_1722_1_LISTENER_ENABLED 0
#endif
#endif

#ifndef AVB_1722_1_ADP_VALID_TIME
#define AVB_1722_1_ADP_VALID_TIME (10)  // 31*2 = 62 seconds validity time
#define AVB_1722_1_ADP_REPEAT_TIME (AVB_1722_1_ADP_VALID_TIME/2)
#endif

#ifndef AVB_1722_1_ADP_VENDOR_ID
#define AVB_1722_1_ADP_VENDOR_ID 0x00229700u
#endif

#ifndef AVB_1722_1_ADP_MODEL_ID
#define AVB_1722_1_ADP_MODEL_ID 0x1234
#endif

#ifndef AVB_1722_1_ADP_ENTITY_CAPABILITIES
#if AVB_1722_1_AEM_ENABLED
#define AVB_1722_1_ADP_ENTITY_CAPABILITIES (AVB_1722_1_ADP_ENTITY_CAPABILITIES_AEM_SUPPORTED| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_CLASS_A_SUPPORTED| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_GPTP_SUPPORTED| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_EFU_MODE| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_ADDRESS_ACCESS_SUPPORTED)
#else
#define AVB_1722_1_ADP_ENTITY_CAPABILITIES (AVB_1722_1_ADP_ENTITY_CAPABILITIES_CLASS_A_SUPPORTED| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_GPTP_SUPPORTED| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_EFU_MODE| \
                                            AVB_1722_1_ADP_ENTITY_CAPABILITIES_ADDRESS_ACCESS_SUPPORTED)
#endif
#endif

#ifndef AVB_1722_1_ADP_TALKER_STREAM_SOURCES
#define AVB_1722_1_ADP_TALKER_STREAM_SOURCES AVB_NUM_SOURCES
#endif

#ifndef AVB_1722_1_ADP_TALKER_CAPABILITIES
#if AVB_1722_1_TALKER_ENABLED
#define AVB_1722_1_ADP_TALKER_CAPABILITIES (AVB_1722_1_ADP_TALKER_CAPABILITIES_IMPLEMENTED| \
                                            AVB_1722_1_ADP_TALKER_CAPABILITIES_AUDIO_SOURCE| \
                                            AVB_1722_1_ADP_TALKER_CAPABILITIES_MEDIA_CLOCK_SOURCE)
#else
#define AVB_1722_1_ADP_TALKER_CAPABILITIES 0
#endif
#endif

#ifndef AVB_1722_1_ADP_LISTENER_STREAM_SINKS
#define AVB_1722_1_ADP_LISTENER_STREAM_SINKS AVB_NUM_SINKS
#endif

#ifndef AVB_1722_1_ADP_LISTENER_CAPABILITIES
#if AVB_1722_1_LISTENER_ENABLED
#define AVB_1722_1_ADP_LISTENER_CAPABILITIES (AVB_1722_1_ADP_LISTENER_CAPABILITIES_IMPLEMENTED|AVB_1722_1_ADP_LISTENER_CAPABILITIES_AUDIO_SINK)
#else
#define AVB_1722_1_ADP_LISTENER_CAPABILITIES 0
#endif
#endif

#ifndef AVB_1722_1_ADP_CONTROLLER_CAPABILITIES
#if AVB_1722_1_CONTROLLER_ENABLED
#define AVB_1722_1_ADP_CONTROLLER_CAPABILITIES AVB_1722_1_ADP_CONTROLLER_CAPABILITIES_IMPLEMENTED
#else
#define AVB_1722_1_ADP_CONTROLLER_CAPABILITIES 0
#endif
#endif

#ifndef AVB_1722_1_FIRMWARE_UPGRADE_ENABLED
#define AVB_1722_1_FIRMWARE_UPGRADE_ENABLED 0
#endif

#ifndef AVB_1722_1_FAST_CONNECT_ENABLED
#define AVB_1722_1_FAST_CONNECT_ENABLED 0
#endif

#ifndef AVB_1722_1_ADP_ASSOCIATION_ID
#define AVB_1722_1_ADP_ASSOCIATION_ID 0
#endif

#ifndef AVB_1722_1_MAX_ENTITIES
#define AVB_1722_1_MAX_ENTITIES 4
#endif

#ifndef AVB_1722_1_MAX_LISTENERS
#define AVB_1722_1_MAX_LISTENERS AVB_NUM_SINKS
#endif

#ifndef AVB_1722_1_MAX_TALKERS
#define AVB_1722_1_MAX_TALKERS AVB_NUM_SOURCES
#endif

#ifndef AVB_1722_1_MAX_LISTENERS_PER_TALKER
#define AVB_1722_1_MAX_LISTENERS_PER_TALKER 4
#endif

#ifndef AVB_1722_1_MAX_INFLIGHT_COMMANDS
#define AVB_1722_1_MAX_INFLIGHT_COMMANDS (AVB_1722_1_MAX_LISTENERS*2)
#endif

/* Debug defines */

#ifndef AVB_1722_1_ADP_DEBUG_ENTITY_REMOVAL
#define AVB_1722_1_ADP_DEBUG_ENTITY_REMOVAL
#endif

#endif /* AVB_1722_1_DEFAULT_CONF_H_ */
