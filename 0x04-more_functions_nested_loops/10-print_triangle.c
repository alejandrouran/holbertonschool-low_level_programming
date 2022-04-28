#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 *
 * Return: no value
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= size; x++)
		{
			for (z = size - x; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
