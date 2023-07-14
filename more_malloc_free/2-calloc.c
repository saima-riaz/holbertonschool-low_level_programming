#include "main.h"
#include <stdlib.h>

/**
 * _calloc  - allocates memory array using malloc,
 *
 * @nmemb : number of elements
 * @size  : size of each element
 * Return: pointeur (success) null (failure).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, (nmemb * size));
return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 *
 * @s    : pointeur
 * @b    : constante a mettre dans les n bytes to the memory area s
 * @n    : nbre de bytes a modifier
 *
 * Return: (char)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
