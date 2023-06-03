/*
 * File: 6-prints_numbers.c
 * Auth: Pilar J Thornbrugh
 */

#include <stdio.h>

/**
 * main- prints all single digit numbers of base 10 starting form 0,
 * 	only using putchar and without char variables.
 *
 * Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
