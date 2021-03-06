#ifndef LIBCHIMES_CUDA_H
#define LIBCHIMES_CUDA_H

#include <map>
#include <vector>
#include "ptr_and_size.h"
#include "heap_tree.h"

extern void translate_cuda_pointers(void *d_arr, int nelems, int elem_size,
        int *ptr_offsets, unsigned n_ptr_offsets, heap_tree *old_to_new);

#endif
