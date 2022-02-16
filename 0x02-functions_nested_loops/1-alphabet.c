#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}

	_putchar('\n');
}
