#ifndef main_h
#define main_h
#include <stdio.h>
#include <limits.h>

unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
unsigned int flip_bits(unsigned long int, unsigned long int);
int get_endianness(void);

#endif
