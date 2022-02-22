#include "main.h"

/**
 * puts_half - prints hallf of a string
 * @str: print string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l;
	int p;

	l = 0;
	p = 0;

	while (*(str + p) != '\0')

		p++;

	l = p / 2;

	if (p  % 2)

		l += 1;

	while (l < p)
	{
		_putchar(*(str + l));

		l++;
	}
	_putchar('\n');
}
