#include "main.h"

/**
 * cap_string - capitalizes all words op a string
 * @s: pointer to
 *
 * Return: capitaleze string
 */
char *cap_string(char *s)
{

	char *x = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; x[j] && x[j] != s[i - 1]; ++j)
					;
			}

			if (x[j])
				s[i] -= ('a' - 'A');
		}
	}

	return (s);
}
