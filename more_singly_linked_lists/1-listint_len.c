#include "lists.h"

/**
 * listint_len - gets the num of nodes in a list
 * @h: singly list to print
 *
 * Return: num of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
