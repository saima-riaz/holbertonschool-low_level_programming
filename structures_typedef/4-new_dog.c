#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new struct of type dog_t
 *
 * @name : element of the structure
 * @age  : element of the structure
 * @owner : element of the structure
 *
 * Return: : pointer to the structure (success) NULL(failed)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	newD = malloc(sizeof(dog_t));
	if (newD == NULL)
		return (NULL);

	newD->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (newD->name == NULL)
	{
		free(newD);
		return (NULL);
	}
	newD->name = _strcpy(newD->name, name);

	newD->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (newD->owner == NULL)
	{
		free(newD->name);
		free(newD);
		return (NULL);
	}
	newD->owner = _strcpy(newD->owner, owner);
	newD->age = age;

	return (newD);
}

/**
* _strlen  - returns the length of a string
*
* @s : s = valeur de s *s = address of s
* Return: (int)
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; (s[i] != '\0'); i++)
	{
	}
	return (i);
}


/**
* _strcpy - copies the string pointed to by src,including (\0)
* to the buffer pointed to by dest
*
* @dest : dest= first element of the array *dest = address of dest
* @src  : src = first element of the arrau *src  = address of src
* Return: (void)
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
