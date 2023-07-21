#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator : argument contains string to be printed between arguments
 * @n :  argument contains number of arguments of variadic argument
 * @... : variadic argument of type char *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		if (n == (i + 1) || separator == NULL)
			separator = "";
		printf("%s%s", s, separator);
	}
	va_end(ap);
	printf("\n");
}
