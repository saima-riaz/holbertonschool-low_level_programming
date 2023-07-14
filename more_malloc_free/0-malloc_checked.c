#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked  - allocates memory using malloc
 *
 * @b : size memory to allocate
 * Return: pointeur (success) exit 98.
 */

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}

