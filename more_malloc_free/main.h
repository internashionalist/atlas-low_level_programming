#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *malloc_checked(unsigned int);
char *string_nconcat(char*, char*, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
