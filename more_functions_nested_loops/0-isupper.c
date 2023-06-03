/*
 * File: 0-isupper.c
 * Auth: Pilar
 */

#include "main.h"

/**
 * _isupper - checks fo uppercase "c" character and returns 1 if true, otherwise it returns 0.
 * @c: the character to be checked
 *
 * Return: 1 if true and 0 for all else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

