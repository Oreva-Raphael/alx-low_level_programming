#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpry = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmpry == NULL)
			return (-1);
		tmpry = tmpry->next;
	}

	if (tmpry == *head)
	{
		*head = tmpry->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmpry->prev->next = tmpry->next;
		if (tmpry->next != NULL)
			tmpry->next->prev = tmpry->prev;
	}

	free(tmpry);
	return (1);
}
