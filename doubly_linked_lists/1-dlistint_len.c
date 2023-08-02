#include "lists.h"

/**
 * dlistint_len -  returns the number of elements of a dlistint_t list
 * @h  : pointer to the head of a list
 * Return: number of elements of a list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
