#include "main.h"

/**
 * print_most_number - prints the numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)

		if (w != '2' && w != '4')

			_putchar(w);
	_putchar('\n');
}
