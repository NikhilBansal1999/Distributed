/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GET_ELEMENTS_X = PMPI_GET_ELEMENTS_X
#pragma weak mpi_get_elements_x__ = PMPI_GET_ELEMENTS_X
#pragma weak mpi_get_elements_x_ = PMPI_GET_ELEMENTS_X
#pragma weak mpi_get_elements_x = PMPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ELEMENTS_X = pmpi_get_elements_x__
#pragma weak mpi_get_elements_x__ = pmpi_get_elements_x__
#pragma weak mpi_get_elements_x_ = pmpi_get_elements_x__
#pragma weak mpi_get_elements_x = pmpi_get_elements_x__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ELEMENTS_X = pmpi_get_elements_x_
#pragma weak mpi_get_elements_x__ = pmpi_get_elements_x_
#pragma weak mpi_get_elements_x_ = pmpi_get_elements_x_
#pragma weak mpi_get_elements_x = pmpi_get_elements_x_
#else
#pragma weak MPI_GET_ELEMENTS_X = pmpi_get_elements_x
#pragma weak mpi_get_elements_x__ = pmpi_get_elements_x
#pragma weak mpi_get_elements_x_ = pmpi_get_elements_x
#pragma weak mpi_get_elements_x = pmpi_get_elements_x
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#pragma weak MPI_GET_ELEMENTS_X = PMPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#pragma weak mpi_get_elements_x__ = pmpi_get_elements_x__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#pragma weak mpi_get_elements_x = pmpi_get_elements_x
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#pragma weak mpi_get_elements_x_ = pmpi_get_elements_x_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GET_ELEMENTS_X  MPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_elements_x__  mpi_get_elements_x__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_elements_x  mpi_get_elements_x
#else
#pragma _HP_SECONDARY_DEF pmpi_get_elements_x_  mpi_get_elements_x_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GET_ELEMENTS_X as PMPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_get_elements_x__ as pmpi_get_elements_x__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_get_elements_x as pmpi_get_elements_x
#else
#pragma _CRI duplicate mpi_get_elements_x_ as pmpi_get_elements_x_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_get_elements_x__ = MPI_GET_ELEMENTS_X
#pragma weak mpi_get_elements_x_ = MPI_GET_ELEMENTS_X
#pragma weak mpi_get_elements_x = MPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ELEMENTS_X = mpi_get_elements_x__
#pragma weak mpi_get_elements_x_ = mpi_get_elements_x__
#pragma weak mpi_get_elements_x = mpi_get_elements_x__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ELEMENTS_X = mpi_get_elements_x_
#pragma weak mpi_get_elements_x__ = mpi_get_elements_x_
#pragma weak mpi_get_elements_x = mpi_get_elements_x_
#else
#pragma weak MPI_GET_ELEMENTS_X = mpi_get_elements_x
#pragma weak mpi_get_elements_x__ = mpi_get_elements_x
#pragma weak mpi_get_elements_x_ = mpi_get_elements_x
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ELEMENTS_X")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_get_elements_x__ = PMPI_GET_ELEMENTS_X
#pragma weak pmpi_get_elements_x_ = PMPI_GET_ELEMENTS_X
#pragma weak pmpi_get_elements_x = PMPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GET_ELEMENTS_X = pmpi_get_elements_x__
#pragma weak pmpi_get_elements_x_ = pmpi_get_elements_x__
#pragma weak pmpi_get_elements_x = pmpi_get_elements_x__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GET_ELEMENTS_X = pmpi_get_elements_x_
#pragma weak pmpi_get_elements_x__ = pmpi_get_elements_x_
#pragma weak pmpi_get_elements_x = pmpi_get_elements_x_
#else
#pragma weak PMPI_GET_ELEMENTS_X = pmpi_get_elements_x
#pragma weak pmpi_get_elements_x__ = pmpi_get_elements_x
#pragma weak pmpi_get_elements_x_ = pmpi_get_elements_x
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ELEMENTS_X")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ELEMENTS_X( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x__( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_x_( MPI_Fint *, MPI_Fint *, MPI_Count *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_elements_x")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_get_elements_x_ PMPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_elements_x_ pmpi_get_elements_x__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_elements_x_ pmpi_get_elements_x
#else
#define mpi_get_elements_x_ pmpi_get_elements_x_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Get_elements_x
#define MPI_Get_elements_x PMPI_Get_elements_x 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_get_elements_x_ MPI_GET_ELEMENTS_X
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_elements_x_ mpi_get_elements_x__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_elements_x_ mpi_get_elements_x
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_get_elements_x_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Count *v3, MPI_Fint *ierr ){
    *ierr = MPI_Get_elements_x( (MPI_Status *)(v1), (MPI_Datatype)(*v2), v3 );
}
