/*
 * File: 3-print_numbers.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_numbers - prints numbers 0-9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <=9; num++)
		_putchar(num);

	_putchar('\n');
}
