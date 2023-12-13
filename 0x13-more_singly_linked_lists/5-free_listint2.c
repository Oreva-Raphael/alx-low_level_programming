#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 * Description- like the one we did before only this time with double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

