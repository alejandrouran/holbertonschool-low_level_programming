#include "main.h"

/**
 * cap_string - capitalizes of a string
 * @n: capitalize
 *
 * Return: as pointer
 */
char *cap_string(char *n)
{
	char *x = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; n[i]; ++i)
	{
		if ('a' <= n[i] && n[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; x[j] && x[j] != n[i - 1]; ++j)
					;
			}
			if (x[j])
				n[i] -= ('a' - 'A');
		}
	}
	return (n);
}
