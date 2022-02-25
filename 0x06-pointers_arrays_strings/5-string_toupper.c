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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
