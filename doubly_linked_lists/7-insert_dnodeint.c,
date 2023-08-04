#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given postion
 * @h  : pointer to the head of a list
 * @n     : data to be insert to the new node
 * @idx : index of the list where the new node should be added
 * Return: the address of the new elementi(success), NULL (failed)
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nNode;
	dlistint_t *temp;
	unsigned int i;

	nNode = malloc(sizeof(dlistint_t));
	if (nNode == NULL)
		return (NULL);
	nNode->n = n;

	if (idx == 0)
	{
		nNode->prev = NULL;
		nNode->next = *h;
		if (*h)
			(*h)->prev = nNode;
		*h = nNode;
		return (*h);
	}

	/*search position in the list*/
	temp = *h;
	/* insertion before the given position*/
	idx--;
	for (i = 0; temp  && i < idx; i++)
	{
		temp = temp->next;
	}
	/* insertion*/
	if (i == idx && temp)
	{
		nNode->prev = temp;
		nNode->next = temp->next;
		if (temp->next)
			temp->next->prev = nNode;
		temp->next = nNode;
		return (nNode);
	}
	return (NULL);
}
