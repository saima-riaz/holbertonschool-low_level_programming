#include "lists.h"

/**
 * sum_dlistint -  return the sum of all the data(n) of a dlistint_t list
 * @head  : head of a list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
