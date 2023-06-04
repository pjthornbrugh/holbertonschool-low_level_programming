/*
 * File: 1-swap.c
 * Auth: Pilar J Thornbrugh
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int to be swapped.
 * @b: the next int to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
