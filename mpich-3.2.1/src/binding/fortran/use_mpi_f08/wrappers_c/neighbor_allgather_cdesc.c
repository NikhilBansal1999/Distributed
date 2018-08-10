/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2014 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface
 * DO NOT EDIT
 */

#include "cdesc.h"

int MPIR_Neighbor_allgather_cdesc(CFI_cdesc_t* x0, int x1, MPI_Datatype x2, CFI_cdesc_t* x3, int x4, MPI_Datatype x5, MPI_Comm x6)
{
    int err = MPI_SUCCESS;
    void *buf0 = x0->base_addr;
    int count0 = x1;
    MPI_Datatype dtype0 = x2;
    void *buf3 = x3->base_addr;
    int count3 = x4;
    MPI_Datatype dtype3 = x5;

    if (buf0 == &MPIR_F08_MPI_BOTTOM) {
        buf0 = MPI_BOTTOM;
    }

    if (buf3 == &MPIR_F08_MPI_BOTTOM) {
        buf3 = MPI_BOTTOM;
    }

    if (x0->rank != 0 && !CFI_is_contiguous(x0)) {
        err = cdesc_create_datatype(x0, x1, x2, &dtype0);
        count0 = 1;
    }

    if (x3->rank != 0 && !CFI_is_contiguous(x3)) {
        err = cdesc_create_datatype(x3, x4, x5, &dtype3);
        count3 = 1;
    }

    err = MPI_Neighbor_allgather(buf0, count0, dtype0, buf3, count3, dtype3, x6);

    if (dtype0 != x2)  MPI_Type_free(&dtype0);
    if (dtype3 != x5)  MPI_Type_free(&dtype3);
    return err;
}
