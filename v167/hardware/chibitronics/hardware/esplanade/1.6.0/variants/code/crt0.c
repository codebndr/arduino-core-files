#include <stdlib.h>
#include <stdint.h>

void abort(void) {
  while(1);
}

int abs(int x) { return (x > 0) ? x : -x; }

void raise(void) {
  while(1);
}

/* handle for C++ destructors, which we don't use. */
uint32_t __dso_handle = 0;