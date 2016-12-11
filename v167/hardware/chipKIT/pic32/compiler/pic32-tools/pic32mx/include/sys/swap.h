#ifndef _SYS_SWAP_H_
#define _SYS_SWAP_H_

#ifdef __GNUC__

#define __swap16gen(x) __extension__({					\
	u_int16_t __swap16gen_x = (x);					\
									\
	(u_int16_t)((__swap16gen_x << 8) |				\
		    (__swap16gen_x >> 8));				\
})

#define __swap32gen(x) __extension__({					\
	u_int32_t __swap32gen_x = (x);					\
									\
        __swap32gen_x = (__swap32gen_x >> 16) | (__swap32gen_x << 16);	\
        ((__swap32gen_x & 0xff00ff) << 8) |				\
	((__swap32gen_x >> 8) & 0xff00ff);				\
})

#else /* __GNUC__ */

/* Note that these macros evaluate their arguments several times.  */
#define __swap16gen(x)							\
    (u_int16_t)(((u_int16_t)(x) & 0xff) << 8 | ((u_int16_t)(x) & 0xff00) >> 8)

#define __swap32gen(x)							\
    (u_int32_t)(((u_int32_t)(x) & 0xff) << 24 |				\
    ((u_int32_t)(x) & 0xff00) << 8 | ((u_int32_t)(x) & 0xff0000) >> 8 |	\
    ((u_int32_t)(x) & 0xff000000) >> 24)

#endif /* __GNUC__ */

#endif /* _SYS_SWAP_H_ */
