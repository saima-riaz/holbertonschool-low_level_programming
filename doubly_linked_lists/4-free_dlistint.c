#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head  : pointer to the head of a list
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
