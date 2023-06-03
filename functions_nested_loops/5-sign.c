/*
 * File: 5-sign.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number of which the sign will print.
 *
 * Return: 1 if the num is > than 0,
 *	   0 if the num is 0,
 *	   -1 id the num is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
