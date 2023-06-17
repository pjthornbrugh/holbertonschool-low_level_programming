#include "main.h"
 
 /**
 * prime_function - auxiliary function.
 * @n: number to evaluate
 * @i: auxiliary var.
 *
 * Return: 1 or 0.
 */
int prime_function(int n, int i)
{
	if (i == 2)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (prime_function(n, i-1));
}

/**
 * is_prime_number - returns 1 if the input is a prime num.
 * @n: the inputed number.
 *
 * Return: either 1 or 0.
 */
int is_prime_number(int n)
{
	int i = (n / 2);

	if (n > 2)
		return (prime_function(n, i));
	if (n < 2)
		return (0);
	else
		return (1);
}
