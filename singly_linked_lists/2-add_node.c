#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - linked list structure
 * @str: string
 * @len: length of the string
 * @next: points to next node
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t; 


/**
 * add_node - adds nodes to the beginning of a linked list.
 * @head: head of the linked list.
 * @str: string to be duplicated and added to the linked list.
 *
 * Return: address of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return NULL;

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;
	return new_node;
}
