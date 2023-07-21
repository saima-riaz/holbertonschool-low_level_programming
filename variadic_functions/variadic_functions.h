#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * struct op - Struct op
 *
 * @op: format
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list ap);
} op_t;



int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
