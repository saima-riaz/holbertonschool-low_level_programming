#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : argument contains string to be printed between arguments
 * @n :  argument contains number of arguments of variadic argument
 * @... : variadic argument of type int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == (i + 1) || separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	printf("\n");
}
