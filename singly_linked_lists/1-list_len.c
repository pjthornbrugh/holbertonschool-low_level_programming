#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the pointer
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
