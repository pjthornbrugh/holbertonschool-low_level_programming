#include "main.h"

/*
 * File: 0-puts_recurion.c
 * Auth: Pilar J Thornbrugh
 */

/**
 * main - function that prints a string, followed by a \n.
 *
 * Return: 0
 */

void _puts_recursion(char *s);

{
	if (*s == '\0')
	{
		putchar ('\n');
		return;
	}
	putchar (*s);
	_puts_recurion(s + 1);
}
