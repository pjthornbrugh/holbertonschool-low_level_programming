/*
 * File: 3-puts.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string to print.
 */
void _puts(char *str)
{
	while (*str != '\0' ) 
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
