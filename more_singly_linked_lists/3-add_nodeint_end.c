#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: current place in list
 * @n: int to add to the list
 *
 * Return: pointer to current position
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
