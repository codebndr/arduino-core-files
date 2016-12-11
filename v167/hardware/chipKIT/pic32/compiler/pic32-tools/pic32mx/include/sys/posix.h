/*
 * Copyright (c) 1996-2003 MIPS Technologies, Inc.
 * All rights reserved.
 * 
 * Unpublished rights (if any) reserved under the copyright laws of the
 * United States of America and other countries.
 * 
 * This code is proprietary to MIPS Technologies, Inc. ("MIPS
 * Technologies").  Any copying, reproducing, modifying or use of
 * this code (in whole or in part) that is not expressly permitted
 * in writing by MIPS Technologies or an authorized third party is
 * strictly prohibited.  At a minimum, this code is protected under
 * unfair competition and copyright laws.  Violations thereof may result
 * in criminal penalties and fines.
 * 
 * MIPS Technologies reserves the right to change this code to improve
 * function, design or otherwise.  MIPS Technologies does not assume any
 * liability arising out of the application or use of this code, or of
 * any error or omission in such code.  Any warranties, whether express,
 * statutory, implied or otherwise, including but not limited to the
 * implied warranties of merchantability or fitness for a particular
 * purpose, are excluded.  Except as expressly provided in any written
 * license agreement from MIPS Technologies or an authorized third party,
 * the furnishing of this code does not give recipient any license to
 * any intellectual property rights, including any patent rights, that
 * cover this code.
 * 
 * This code shall not be exported, reexported, transferred, or released,
 * directly or indirectly, in violation of the law of any country or
 * international law, regulation, treaty, Executive Order, statute,
 * amendments or supplements thereto.  Should a conflict arise regarding
 * the export, reexport, transfer, or release of this code, the laws of
 * the United States of America shall be the governing law.
 * 
 * This code constitutes one or more of the following: commercial
 * computer software, commercial computer software documentation or
 * other commercial items.  If the user of this code, or any related
 * documentation of any kind, including related technical data or
 * manuals, is an agency, department, or other entity of the United
 * States government ("Government"), the use, duplication, reproduction,
 * release, modification, disclosure, or transfer of this code, or
 * any related documentation of any kind, is restricted in accordance
 * with Federal Acquisition Regulation 12.212 for civilian agencies
 * and Defense Federal Acquisition Regulation Supplement 227.7202 for
 * military agencies.  The use of this code by the Government is further
 * restricted in accordance with the terms of the license agreement(s)
 * and/or applicable contract terms and conditions covering this code
 * from MIPS Technologies or an authorized third party.
 * 
 * 
 */

/* 
 * sys/posix.h: POSIX version numbers
 */


#ifndef __SYS_POSIX_H
#define __SYS_POSIX_H

#ifndef _POSIX_C_SOURCE
#if defined(_POSIX_SOURCE)
#define _POSIX_C_SOURCE 198808L
#else
/*#define _POSIX_C_SOURCE 0*/
#endif
#endif /* !_POSIX_C_SOURCE */

/* 
 * 198808L	POSIX.1,FIPS-151-1 
 * 199009L	POSIX.1,FIPS-151-2
 * 199309L	POSIX.4
 * 199506L	POSIX.4a, POSIX.1c (threads)
 */
#define _POSIX_VERSION 199506L

#if _POSIX_C_SOURCE > _POSIX_VERSION
#error _POSIX_C_SOURCE < _POSIX_VERSION
#endif

#define _POSIX_ASYNC_IO		-1
#define _POSIX_CHOWN_RESTRICTED	-1
#define _POSIX_NO_TRUNC		0
#define _POSIX_PRIO_IO		-1
#define _POSIX_SYNC_IO		-1

#undef _POSIX_ASYNCHRONOUS_IO
#undef _POSIX_FSYNC
#undef _POSIX_JOB_CONTROL
#undef _POSIX_MAPPED_FILES
#undef _POSIX_MEMLOCK
#undef _POSIX_MEMLOCK_RANGE
#undef _POSIX_MEMORY_PROTECTION
#undef _POSIX_MESSAGE_PASSING
#undef _POSIX_PRIORITIZED_IO
#undef _POSIX_PRIORITY_SCHEDULING
#undef _POSIX_REALTIME_SIGNALS
#undef _POSIX_POLL
#undef _POSIX_SELECT
#undef _POSIX_SEMAPHORES
#undef _POSIX_SAVED_IDS
#undef _POSIX_SHARED_MEMORY_OBJECTS
#undef _POSIX_SYNCHRONIZED_IO
#undef _POSIX_TIMERS

#define _POSIX_SYNC_IO		-1
#define _POSIX_ASYNC_IO		-1
#define _POSIX_PRIO_IO		-1

/* extensions */
#include <pthread/unistd.h>

#endif /* __SYS_POSIX_H */
