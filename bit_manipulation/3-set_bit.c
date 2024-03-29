#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1
 * @n: number in question
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (8 * sizeof(*n)) - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
