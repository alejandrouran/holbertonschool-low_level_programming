#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: 1
 */

void print_numbers(void)
{
	int w;

	for (w = 0; w <= 9; w++)
	{
		_putchar(w + '0');
	}
	_putchar('\n');
}
