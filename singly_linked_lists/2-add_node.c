#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds nodes to the beginning of a linked list.
 * @head: head of the linked list.
 * @str: string to be duplicated and added to the linked list.
 *
 * Return: address of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
