#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string.
 * @p: string convert
 *
 * Return: string
 */
char *string_toupper(char *p)
{
	int i = 0;
	int d = 'a' - 'A';

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - d;
		}
	}

	return (p);
}
