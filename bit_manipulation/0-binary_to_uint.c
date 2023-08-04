#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b  :   pointer to  the string to convert
 * Return: convert number (success) .
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n = n << 1;
		if (*b == '1')
			n = n | 1;
		b++;
	}
	return (n);
}
