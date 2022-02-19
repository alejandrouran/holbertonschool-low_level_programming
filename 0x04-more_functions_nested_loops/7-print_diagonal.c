#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (x = 1; x <= n; x++)
		{

			for (y = 1; y <= n; y++)
			{
				if (y < x)
				{
					_putchar(' ');
				}

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
