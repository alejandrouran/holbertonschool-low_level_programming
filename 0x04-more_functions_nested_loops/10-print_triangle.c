#include "main.h"

/**
 * print_trangle - prints a triangle
 * @size: is the size of the triangle
 *
 * Return: no value
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; y < size; x++)
		{
			for (z = size - 1; z > x; z--)
				_putchar(' ');

			for (y = 0; y <= x; y++)

				_putchar('\n');
		}
	}
	else
		_putchat('\n');
}
