#include "main.h"

/**
 * cap_string - capitalizes all words op a string
 * @c: pointer to
 *
 * Return: c
 */
char *cap_string(char *c)
{

	char *a = "\t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; c[i]; ++i)
	{
		if ('a' <= c[i] && c[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; a[j] && a[j] != c[i - 1]; ++j)
					;
			}
			if (a[j])
				c[i] -= ('a' - 'A');
		}

	}
	return (c);
}
