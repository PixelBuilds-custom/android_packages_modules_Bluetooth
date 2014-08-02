#pragma once

#include <stdbool.h>
#include <stdint.h>

#define UNUSED_ATTR __attribute__((unused))
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#define INVALID_FD (-1)

typedef uint32_t timeout_t;
