#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: string
 *
 * Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l;
		char *c;

		if (s1 == NULL)

			s1 = "";

		if (s2 == NULL)

			s2 = "";

		for (j = 0; s1[j] != '\0'; j++)
			;

		for (l = 0; s2[l] != '\0'; l++)
			;
		if (n >= l)
			;
		else
			l = n;

		c = malloc((sizeof(char) * j) + (sizeof(char) * l) + 1);

		if (c == NULL)

			return (NULL);

		for (i = 0; i < (j + l); i++)
		{
			if (i >= j)
				c[i] = s2[i - j];
			else
				c[i] = s1[i];
		}
		c[i] = '\0';

		return (c);
}
