/*
 * File: 4-print_most_numbers
 * Auth: Pilar J Thornbrugh
 */

include "main.h"

/**
 * print_numbers - prints 0-9 but not 2 and 4.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_puthcar('\n');
}
