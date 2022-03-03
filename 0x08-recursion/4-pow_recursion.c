#include "main.h"

/**
 * _pow_recursion - returns the value of x reised t0 the power of y
 * @x: base number
 * @y: exponent number
 *
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y <  0)

		return (-1);

	else if (y == 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}
