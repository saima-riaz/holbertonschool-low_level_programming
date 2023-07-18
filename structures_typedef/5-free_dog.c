#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free memory
 *
 * @d : d structure de type dog_t
 *
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
