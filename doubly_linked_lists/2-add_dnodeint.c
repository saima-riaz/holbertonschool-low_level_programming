#include "lists.h"

/**
 * add_dnodeint -  adds a node of the beginning of the dlistint_²t list
 * @head  : pointer to the head of a list
 * @n    : data to be duplicated and add on the top of the list
 * Return: the address of the new elementi(success), NULL (failed)
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

