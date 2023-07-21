#include "variadic_functions.h"

/**
 * op_c - print character
 * @fmt : name valist
 * Return: nothing
 */
void op_c(va_list fmt)
{
	printf("%c", va_arg(fmt, int));
}

/**
 * op_i - print integer
 * @fmt : name valist
 * Return: nothing
 */
void op_i(va_list fmt)
{
	printf("%d", va_arg(fmt, int));
}

/**
 * op_f - print float
 * @fmt : name valist
 * Return: nothing
 */
void op_f(va_list fmt)
{
	printf("%f", va_arg(fmt, double));
}

/**
 * op_s - print string
 * @fmt : name valist
 * Return: nothing
 */
void op_s(va_list fmt)
{
	char *str;

	str = va_arg(fmt, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints all (const char * const format,...)
 * @format : list of types of arguments passed to the function
 * @... : variadic argument of any type
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	op_t ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	int i, j;
	char *sep = "";

	i = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", sep);
				ops[j].f(ap);
				sep = ", ";
				j = 5;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
