#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * do not print 2 and 4
 *
 * Return: no value
 */
void print_most_numbers(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)

		if (w != '2' && w != '4')

			_putchar(w);
	_putchar('\n');
}
