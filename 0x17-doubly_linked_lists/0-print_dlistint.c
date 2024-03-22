#include "lists.h"
/**
 * print_dlistint - print all the elements of a double linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmpry = h;

	while (tmpry != NULL)
	{
		printf("%d\n", tmpry->n);
		count += 1;
		tmpry = tmpry->next;
	}
	return (count);
}
