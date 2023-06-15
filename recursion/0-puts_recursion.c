#include "main.h"

/*
 * File: 0-puts_recurion.c
 * Auth: Pilar J Thornbrugh
 */

/**
 * _puts_recursion  - prints a string, followed by a \n.
 * @s: string
 * 
 */

void _puts_recursion(char *s);
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}		
	
	_putchar(*s);
	_puts_recurion(++s);
}
