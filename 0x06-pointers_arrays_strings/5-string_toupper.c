#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string.
 * @j: string convert
 *
 * Return: string
 */
char *string_toupper(char *j)
{
	int i = 0;

	while (*(j + i) != '\0')
	{
		if (*(j + i) >= 'a' && *(j + i) <= 'Z')

			*(j + i) -= 32;

		i++;
	}
	return (j);
}
