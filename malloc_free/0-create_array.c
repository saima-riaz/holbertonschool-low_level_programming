#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of chars
 *@size: size of the array
 *@c: char stored
 *Return: pointer of array of chars
 **/

char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;

if (size == 0)
return (NULL);
pointer = malloc(sizeof(c) * size);

if (pointer == NULL)
return (NULL);

for (i = 0; i < size; i++)
pointer[i] = c;

return (pointer);
}

