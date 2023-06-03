/*
 * File: 6-print_line.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_line - this draws a straight line using the _ character.
 * @n: the number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
