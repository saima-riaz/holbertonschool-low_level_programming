#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d : structure to be initialised
 * @name : element of the structure
 * @age : element of the structure
 * @owner : element of the structure
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
