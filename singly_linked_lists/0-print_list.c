#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints the element of a singly list
 * @h: pointer to the list
 * Return: number of nodes in the list
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h);
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h-> == NUll)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		count++
		h = h->str
	}
	return count;
}	
