#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: character
 *
 * Return: no value
 */
void puts2(char *str)
{
	int p = 0;

	while (*(str + p) != 0)
	{
		if (p % 2 == 0)
		{
			_putchar(*(str + p));
		}
	}
	_putchar('\n');
}
