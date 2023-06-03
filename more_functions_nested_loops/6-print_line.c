/*
 * File: 6-print_line.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_line - this draws a straight line using the _ character.
 * @n: the number of _ characters to be printed.
 */
void print_line(void)
{
	if (n <= 0)
		_putchar('\n');
	else
		int i;
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
