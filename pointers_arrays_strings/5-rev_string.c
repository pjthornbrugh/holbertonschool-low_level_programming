/*
 * File: 5-rev_string.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string getting reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
