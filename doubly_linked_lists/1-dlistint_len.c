#include "lists.h"

/**
 * dlistnint_len - returns the num of elements in a linked list
 * @h: pointer to list.
 * Return: number of nodes.
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
