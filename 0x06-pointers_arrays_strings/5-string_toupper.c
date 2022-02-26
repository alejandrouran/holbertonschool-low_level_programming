#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string.
 * @str: string convert
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'Z')

			str = str - 'a' + 'A';

		i++;
	}
	return (str);
}
