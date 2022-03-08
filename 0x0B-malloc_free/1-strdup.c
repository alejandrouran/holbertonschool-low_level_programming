#include "main.h"
#include <stdlib.h>

/**
 * _strdup - concatenates two strings
 * @str: duplicate of the string
 *
 * Return: pointer array
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a, j;

	if (str == NULL)

		return (NULL);

	for (a = 0; str[a]; a++)
		;

	a++;

	s = malloc(a * sizeof(char));

	if (s == NULL)

		return (NULL);

	for (j = 0; j < a; j++)

		s[j] = str[j];

	return (s);
}
