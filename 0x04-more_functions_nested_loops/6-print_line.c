#include "main.h"

/**
 * print_line -draws a straight line.
 * @n: lines
 *
 * Return: no value
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
