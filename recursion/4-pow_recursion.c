#include "main.h"

/**
 * _pow_recursion - returns the values on raised powers.
 * @x: base
 * @y: the power @x is raised by.
 *
 * Return: @x ** @y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
