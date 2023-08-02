#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h  : pointer to the head of a list
 * Return: number of elements of a list
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
