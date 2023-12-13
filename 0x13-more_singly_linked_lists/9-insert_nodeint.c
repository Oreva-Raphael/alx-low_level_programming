#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
 * Description- this one is actually tricky.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *plchldr, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		plchldr = *head;
		for (i = 0; i < idx - 1 && plchldr != NULL; i++)
		{
			plchldr = plchldr->next;
		}
		if (plchldr == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = plchldr->next;
	plchldr->next = new;
	return (new);
}
