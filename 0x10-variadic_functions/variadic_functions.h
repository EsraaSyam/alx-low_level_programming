#ifndef VARADIC_FUNCTIONS_H
#define VARADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct print - Struct print
 *
 * @c: The operator
 * @f: The function associated
 */
typedef struct print
{
char *c;
void (*f)(va_list);
} print_t;
int sum_them_all(const unsigned int n, ...);

#endif
