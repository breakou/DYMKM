#ifndef USER_TA_HEADER_DEFINES_H
#define USER_TA_HEADER_DEFINES_H

#include <shared_mem_ta.h>

#define TA_UUID            TA_SHARED_MEM_UUID

#define TA_FLAGS           TA_FLAG_EXEC_DDR
#define TA_STACK_SIZE (2 * 1024 * 1024)  // 例如调整为2MB
#define TA_DATA_SIZE  (4 * 1024 * 1024)  // 例如调整为4MB

#define TA_CURRENT_TA_EXT_PROPERTIES \
    { "gp.ta.description", USER_TA_PROP_TYPE_STRING, \
        "Example of TA using shared memory" }, \
    { "gp.ta.version", USER_TA_PROP_TYPE_U32, &(const uint32_t){ 0x0010 } }

#endif /* USER_TA_HEADER_DEFINES_H */
