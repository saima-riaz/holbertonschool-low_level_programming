#include "lists.h"

/**
 * add_node -  adds a node of the beginning of the list_t list
 * @head  : pointer to the head of a list
 * @str   : data to be duplicated and add on the top of the list
 * Return: the address of the new elementi(success), NULL (failed)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
* _strlen  - returns the length of a string
*
* @s : s = valeur de s *s = address of s
* Return: (unsigned int)
*/

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i];)
		i++;
	return (i);
}
