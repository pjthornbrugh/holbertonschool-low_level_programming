#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listt list
 * @h: singly linked list to print
 * @list_t: list
 * Return: num of nodes in list_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
