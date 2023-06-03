/*
 * File: 5-print_numbers.c
 * Auth: Pilar J Thornbrugh
 */

#include <stdio.h>

/**
 * main - prints all the sigle digit numbers of base 10 starting from 0.
 *
 * Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
