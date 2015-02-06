#include "common.h"

#include <stdint.h>
#include <stdlib.h>

#include <glog/logging.h>

inline void itos(uint8_t *dst, uint64_t val, int len) {
  for (int i = 0; i < 8; ++i) {
    *dst++ = static_cast<uint8_t>(val & 0xff);
    val >>= 8;
  }
}

inline uint64_t stoi(const uint8_t *src, int len) {
  uint64_t result = 0;
  for (int i = 0; i < len; ++i) {
    result |= static_cast<uint64_t>(*(src + i)) << (i * 8);
  }
  return result;
}

int64_t now_in_us() {
  timeval now;
  
  if (gettimeofday(&now, NULL)) {
    return -1;
  } else {
    return now.tv_sec * 1000000 + now.tv_usec;
  }
}

