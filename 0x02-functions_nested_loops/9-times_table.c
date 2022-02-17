#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: empty output
 */
void times_table(void)
{
	int v, w, x, y, z;

	for (v = 0; v < 9; v++)
	{
		for (w = 0; w <= 9; w++)
		{
			x = v * w;
			y = x / 9;
			z = x % 9;
			if (w == 0)
				_putchar('0');

			else if (x < 9)
			{
				_putchar(' ');
				_putchar('0' + z);
			}
			else
			{
				_putchar('0' + y);
				_putchar('0' + z);
			}
			if (w < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
