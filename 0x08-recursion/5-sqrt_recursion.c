#include "main.h"

int square_sqrt(int n, int i);

/**
 * _sqrt_recursion - natural number square root of a number.
 * @n: natural number
 *
 * Return: square_sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (square_sqrt(n, 0));
}

/**
 * square_sqrt - function shoul return
 * @n: number
 * @i: number
 *
 * Return: square_sqrt
 */
int square_sqrt(int n, int i)
{
	if (i * i > n)

		return (-1);

	if (i * i == n)

		return (i);

	return (square_sqrt(n, i + 1));
}
