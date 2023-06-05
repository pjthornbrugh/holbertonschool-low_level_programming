/*
 * File: 4-print_rev.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string being printed
 *
 * Return: once printed and followed by a new line
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len -1; index >=0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
