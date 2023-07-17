#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the num of bits you would need to flip
 * @n: base num
 * @m: num to trasform to
 * Return: the num of bits transformation needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int p = 0;
	int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			p++;
		num = num >> 1;
		len--;
	}
	return (p);
}
