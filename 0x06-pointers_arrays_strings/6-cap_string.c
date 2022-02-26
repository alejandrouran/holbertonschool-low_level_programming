#include "main.h"

/**
 * cap_string - capitalizes all words op a string
 * @p: pointer to
 *
 * Return: p
 */
char *cap_string(char *p)
{
	int i;

	i = 0;

	while (p[i] != '\0')
	{
		if ((i == 0 || p[i - 1] == ' ') &&
		    (p[i] <= 'z' && p[i] >= 'a'))
		{
			p[i] -= 32;
		}
		else if (!(i == 0 || p[i - 1] == ' ') &&
			 (p[i] >= 'A' && p[i] <= 'Z'))
	{
		p[i] += 32;
	}
		i++;
	}
	return (p);
}
