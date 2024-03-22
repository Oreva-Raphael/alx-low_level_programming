#include "lists.h"
/**
 * dlistint_len - length of list
 *
 * @h: the head of the list
 * Return: the number of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmpry = h;

	while (tmpry != NULL)
	{
		count += 1;
		tmpry = tmpry->next;
	}
	return (count);
}
