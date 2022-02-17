#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: empty output
 */
void times_table(void)
{
	int v;
	int w;

	for (v = 0; v <= 9; v++)
	{
		for (w = 0; w <= 9; w++)
		{

			if (w == 0)
				_putchar(w + '0');

			else if (w * v <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(w * v + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((w * v) / 10 + '0');
				_putchar((w * v) % 10 + '0');
			}
		}

		_putchar('\n');

	}
}
