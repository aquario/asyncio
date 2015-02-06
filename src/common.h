#ifndef COMMON_H_
#define COMMON_H_

#include <stdint.h>
#include <sys/time.h>

namespace Common {

// Conversion between uint64_t and byte array.
// Using unsigned type here to avoid weird shifting behaviors.
void itos(uint8_t *dst, uint64_t val, int len);
uint64_t stoi(const uint8_t *src, int len);

// Get current time in microseconds.
// Returns -1 if gettimeofday() failed.
int64_t now_in_us();

} // namespace Common

#endif  // COMMON_H_
