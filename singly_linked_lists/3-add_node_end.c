#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head of the linked list
 * @str: string being duplicated
 *
 * Return: address of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *aux = *head;

	new_node = malloc(sozeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node-> = strdup(str);
	if (new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head

		while (current->next != NULL)
		{
			cureent = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
} 
