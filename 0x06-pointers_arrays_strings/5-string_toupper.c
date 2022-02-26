#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string.
 * @str: string convert
 *
 * Return: string
 */
char *string_toupper(char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'Z')
		{

			b[i] -= 32;
		}

		i++;
	}
	return (b);
}
