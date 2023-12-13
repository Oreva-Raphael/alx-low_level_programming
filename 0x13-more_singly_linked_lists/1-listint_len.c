#include "lists.h"
/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: head pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t listlen = 0;

	listint_t *firstnode;
	listint_t *lastnode;

	firstnode = (listint_t *)h;
	lastnode = firstnode;
	while (lastnode != NULL)
	{
		listlen++;
		lastnode = lastnode->next;
	}
	return (listlen);
}
