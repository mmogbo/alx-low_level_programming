#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
int is_digit(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);

#endif
