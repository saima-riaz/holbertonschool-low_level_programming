#include "main.h"
/**
 * flip_bits - Returns the number of bits required
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
	count += diff & 1;
	diff >>= 1;
	}
	return (count);
}
