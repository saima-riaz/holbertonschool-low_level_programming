#include "lists.h"

/**
 * get_dnodeint_at_index  -  return th nth node of a dlistint_t list
 * @head  : head of a list
 * @index : index of the node
 * Return: the address of the new elementi(success), NULL (failed)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head  && i < index; i++)
	{
		head = head->next;
	}
	if (i == index)
		return (head);
	return (NULL);
}

