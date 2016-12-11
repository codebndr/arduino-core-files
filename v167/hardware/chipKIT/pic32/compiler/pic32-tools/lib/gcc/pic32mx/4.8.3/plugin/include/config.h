#ifndef GCC_CONFIG_H
#define GCC_CONFIG_H
#ifdef GENERATOR_FILE
#error config.h is for the host, not build, machine.
#endif
#ifndef _BUILD_C32_
# define _BUILD_C32_ 1
#endif
#ifndef _BUILD_MCHP_
# define _BUILD_MCHP_ 1
#endif
#ifndef _BUILD_C32_
# define _BUILD_C32_ 1
#endif
#ifndef _BUILD_MCHP_
# define _BUILD_MCHP_ 1
#endif
#include "auto-host.h"
#ifdef IN_GCC
# include "ansidecl.h"
#endif
#endif /* GCC_CONFIG_H */
