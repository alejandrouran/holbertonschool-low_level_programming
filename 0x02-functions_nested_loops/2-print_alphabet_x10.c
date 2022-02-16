#include "main.h"

/**
 * main - prints 10 times the alphabet.
 *
 *
 *
 * Return: Always 0.
 */
void print_aphabet_x10(void)
{
	int x;
	int y;

		for (x = 0; x <= 9; x++)

		{
			for (y = 'a'; y <= 'z'; y++)

				_putchar(y);

			_putchar('\n');

		}
}
