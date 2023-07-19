#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 *
 * @array : array
 * @cmp : pointer to the function
 * @size  : size of the array
 * Return: result (success) -1 (failed).
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
