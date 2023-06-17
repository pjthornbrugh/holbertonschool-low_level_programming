#include "main.h"

/**
 * sqrt_aux - auxiliar function of recursive.
 * @n: number.
 * @root: root of @n.
 * @X2root: aux variable.
 *
 * Return: 1 or 0.
 */
int sqrt_aux(int n, int root, int X2root)
{
	if (n == X2root)
		return (root);
	if (n > X2root)
	{
		root++;
		return (sqrt_aux(n, root, root * root));
	}
	return (-1);
}


/**
 * _sqrt_recursion - returns the square root of a num.
 * @n: number.
 *
 * Return: the square root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_aux(n, 0, n));
}
