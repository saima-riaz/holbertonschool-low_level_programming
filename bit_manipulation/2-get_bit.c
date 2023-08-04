#include "main.h"

/**
 * get_bit  - returns the value of a bit at a given index
 * @n      : number to check
 * @index  : position of the bit wanted
 * Return: index (success) -1 (failed)
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return (n >> index & 1);

	return (-1);
}
