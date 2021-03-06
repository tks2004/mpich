/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2016 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */

#ifndef SHM_PRE_H_INCLUDED
#define SHM_PRE_H_INCLUDED

#include <mpi.h>

#include "../posix/posix_pre.h"
#ifdef MPIDI_CH4_SHM_ENABLE_XPMEM
#include "../xpmem/xpmem_pre.h"
#endif

typedef struct {
    MPIDI_POSIX_Global_t posix;
#ifdef MPIDI_CH4_SHM_ENABLE_XPMEM
    MPIDI_XPMEM_Global_t xpmem;
#endif
} MPIDI_SHM_Global_t;

#endif /* SHM_PRE_H_INCLUDED */
