#include "main.h"

/**
 * cap_string - capitalizes all words op a string
 * @s: pointer to
 *
 * Return: p
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char *a = "\t\n,;.!?\"(){}";

	for (i = 0, j = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; a[j] && a[j] != a[i - 1]; ++j)
					;
			}

			if (a[j])
				s[i] -= ('a' - 'A');
		}

	}
	return (s);
}
