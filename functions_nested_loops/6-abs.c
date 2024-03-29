/*
 * File: 6-abs.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
