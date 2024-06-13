#ifndef main_h
#define main_h
#include <stdio.h>i
#include <stdlib.h>

char *create_array(unsigned int, char);
char *_strdup(char*);
char *str_concat(char*, char*);
int **aloc_grid(int, int);
void free_grid(int**, int);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
