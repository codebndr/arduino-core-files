#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

extern "C" void __cxa_pure_virtual()
{
  asm("bkpt #0");
}

namespace __cxxabiv1
{
  /* guard variables */

  /* The ABI requires a 64-bit type.  */
  __extension__ typedef int __guard __attribute__((mode(__DI__)));

  extern "C" int __cxa_guard_acquire (__guard *);
  extern "C" void __cxa_guard_release (__guard *);
  extern "C" void __cxa_guard_abort (__guard *);

  extern "C" int __cxa_guard_acquire (__guard *g) {
    return !*(char *)(g);
  }

  extern "C" void __cxa_guard_release (__guard *g) {
    *(char *)g = 1;
  }

  extern "C" void __cxa_guard_abort (__guard *)
  {
    asm("bkpt #0");
  }
}

void *operator new(size_t size)
{
  return malloc(size);
}

void *operator new[](size_t size)
{
  return malloc(size);
}

void operator delete(void *p)
{
  free(p);
}

void operator delete[](void *p)
{
  free(p);
}
