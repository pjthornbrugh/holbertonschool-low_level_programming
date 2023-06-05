/*
 * File: 6-puts2.c
 * Auth: Pilar J Thornbrugh
 *
 */

#include "main.h"

/**
 * puts2 - prints every other character, starting with the first,
 *	   followed by a new line
 * @str: string being printed
 *
 * Return: ...
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
