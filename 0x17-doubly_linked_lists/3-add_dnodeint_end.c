#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a double pointer to the start node of the double linked list
 * @n: the data value
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmpry;
	dlistint_t *new_node;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (head == NULL || *head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	tmpry = *head;
	while (tmpry->next != NULL)
		tmpry = tmpry->next;
	tmpry->next = new_node;
	new_node->next = NULL;
	new_node->prev = tmpry;
	return (new_node);
}
