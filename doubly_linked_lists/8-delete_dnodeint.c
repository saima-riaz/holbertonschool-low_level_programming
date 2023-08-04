#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head  : pointer to the head of a list
 * @index : index of the node that should be deleted
 * Return:  1 on success, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pWork = *head;

	if (*head)
	{
		while (pWork  &&  index)
		{
			pWork = pWork->next;
			index--;
		}
		if (!index && pWork)
		{
			if (pWork->next)
				pWork->next->prev = pWork->prev;
			if (pWork->prev)
				pWork->prev->next = pWork->next;
			else
				*head = pWork->next;
			free(pWork);
			return (1);
		}
	}
	return (-1);
}
