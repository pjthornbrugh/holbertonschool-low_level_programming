#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a num.
 * @n: unisgned long int
 *
 * Return: the binary representation of said num.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary (n >> 1);

	_putchar((n & 1) + '0'
}
