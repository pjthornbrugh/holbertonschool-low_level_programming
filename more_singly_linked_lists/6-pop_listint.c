#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node and returns nodes data
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;

	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(tmp);
	}

	else
		i = 0;
	return (i);
}
