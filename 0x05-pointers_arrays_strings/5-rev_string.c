#include "main.h"

/**
 * _strlen - retuns the length of a sting
 * @s: char pointer
 *
 * Return: no value
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * rev_string - reverse a string
 * @s: reverse
 *
 * Return: no value
 */
void rev_string(char *s)
{
	int p;
	int l = _strlen(s);
	char t;

	for (p = 0; p < l / 2; p++)
	{
		t = *(s + p);
		*(s + p) = *(s + l - 1 - p);
		*(s + l - 1 - p) = t;
	}
}
