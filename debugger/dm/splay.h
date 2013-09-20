/*++

Copyright (c) 1989  Microsoft Corporation

Module Name:

    Splay.c

Abstract:

    This module implements the general splay utilities

Author:

    Gary Kimura     [GaryKi]    23-May-1989

Environment:

    Pure utility routine

Revision History:

--*/

#ifndef _splay_h_
#define _splay_h_

#include "precomp.h"
#define RtlLeftChild(Links) (           \
    (PRTL_SPLAY_LINKS)(Links)->LeftChild \
)


#define RtlRightChild(Links) ( (PRTL_SPLAY_LINKS)(Links)->RightChild )

#define RtlIsRoot(Links) ( (RtlParent(Links) == (PRTL_SPLAY_LINKS)(Links)) )


#define RtlParent(Links) ( (PRTL_SPLAY_LINKS)(Links)->Parent )


#define ParentsChildPointerAddress(Links) ( \
    RtlIsLeftChild(Links) ?                 \
	&(((Links)->Parent)->LeftChild)     \
    :                                       \
	&(((Links)->Parent)->RightChild)    \
)

#define RtlIsLeftChild(Links) ( (RtlLeftChild(RtlParent(Links)) == (PRTL_SPLAY_LINKS)(Links)) )

// #define SwapPointers(Ptr1, Ptr2) {      \
//     PVOID _SWAP_POINTER_TEMP;           \
//     _SWAP_POINTER_TEMP = (PVOID)(Ptr1); \
//     ((PVOID)(Ptr1)) = ((PVOID)(Ptr2));                    \
//     ((PVOID)(Ptr2)) = _SWAP_POINTER_TEMP; \
//     }



#define ParentsChildPointerAddress(Links) ( \
    RtlIsLeftChild(Links) ?                 \
        &(((Links)->Parent)->LeftChild)     \
    :                                       \
        &(((Links)->Parent)->RightChild)    \
    )

#define RtlIsRightChild(Links) ( (RtlRightChild(RtlParent(Links)) == (PRTL_SPLAY_LINKS)(Links)) )

typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
} RTL_SPLAY_LINKS;
typedef RTL_SPLAY_LINKS *PRTL_SPLAY_LINKS;


VOID
SwapSplayLinks (
    IN PRTL_SPLAY_LINKS Link1,
    IN PRTL_SPLAY_LINKS Link2
    );


PRTL_SPLAY_LINKS
RtlSplay (
    IN PRTL_SPLAY_LINKS Links
    );

PRTL_SPLAY_LINKS
RtlDelete (
		   IN PRTL_SPLAY_LINKS Links
    );

VOID
RtlDeleteNoSplay (
				  IN PRTL_SPLAY_LINKS Links,
				  IN OUT PRTL_SPLAY_LINKS *Root
				  );

PRTL_SPLAY_LINKS
RtlSubtreeSuccessor (
					 IN PRTL_SPLAY_LINKS Links
    );

PRTL_SPLAY_LINKS
RtlSubtreePredecessor (
					   IN PRTL_SPLAY_LINKS Links
    );

PRTL_SPLAY_LINKS
RtlRealSuccessor (
				  IN PRTL_SPLAY_LINKS Links
    );

PRTL_SPLAY_LINKS
RtlRealPredecessor (
					IN PRTL_SPLAY_LINKS Links
    );
#endif