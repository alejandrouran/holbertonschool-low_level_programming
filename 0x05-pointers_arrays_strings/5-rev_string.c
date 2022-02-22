#include "main.h"

/**
 * rev_string - reverse a string
 * @s: reverse
 *
 * Return: no value
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}



void rev_string(char *s)
{
	int i;
	int l = _strlen(s);
	char t;
	for (i = 0; i < l / 2; i++)
	{
		t = *(s + i);
		*(s + i) = *(s + l - 1 - i);
		*(s + l - 1 - i) = t;
	}
}
