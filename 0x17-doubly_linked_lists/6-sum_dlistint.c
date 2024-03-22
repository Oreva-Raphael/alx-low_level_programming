#include "lists.h"

/**
 * sum_dlistint - computes the sum of all data(n)
 * @head: the pointer to the start node of the dlinked list
 * Return: the sum of all data on success. Otherwise 0
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmpry = head;
	int result = 0;

	while (tmpry != NULL)
	{
		result += tmpry->n;
		tmpry = tmpry->next;
	}
	return (result);
}
