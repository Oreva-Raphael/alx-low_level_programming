#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a dlinked list
 * @head: the head of the node
 * @n:the data
 * Return: the address of the new element of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if ((*head) == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = (*head);
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
