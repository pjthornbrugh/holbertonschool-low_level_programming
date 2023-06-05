/*
 * File: 4-print_rev.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string being printed
 *
 * Return: ...
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{	
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
