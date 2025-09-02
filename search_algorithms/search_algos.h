#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
void print_array(int *, size_t, size_t);

int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
