/*
 * File: 8-print_square.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_square - prints a square using the # character
 * @size: the size of the square.
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
