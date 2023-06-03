/*
 * File: 2-print_alphabet.c
 * Auth: Pilar J Thornbrugh
 */

#include <stdio.h>

/**
 * main - prints the alaphabet in lowercase.
 *
 * Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
