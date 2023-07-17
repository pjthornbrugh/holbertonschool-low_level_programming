#include "main.h"
#include <stdio.h>

/**
 * flip_bit - returns the num of bits you would need to flip
 * @n: base num
 * @m: num to trasform to
 * Return: the num of bits transformation needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	res = 0;

	for (i = 8 * sizeof(n) - i; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
