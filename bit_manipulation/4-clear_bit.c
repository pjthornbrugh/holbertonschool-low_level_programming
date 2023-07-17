#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: number in question
 * @index: index
 *
 * Return: 1 if it worked or -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
