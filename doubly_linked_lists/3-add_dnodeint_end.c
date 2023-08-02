#include "lists.h"

/**
 * add_dnodeint_end  -  adds a new node at the end of a dlistint_t list
 * @head  : pointer to the head of a list
 * @n     : data to be add at the end of the list
 * Return: the address of the new elementi(success), NULL (failed)
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head  == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);

}

