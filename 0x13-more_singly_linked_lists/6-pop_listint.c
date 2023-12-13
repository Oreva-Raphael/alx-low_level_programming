#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *Return: something
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ark;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	ark = temp->ark;
	free(temp);
	return (ark);
}

