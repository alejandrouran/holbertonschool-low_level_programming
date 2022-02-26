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
	int j;
	char a[] = "\t\n,;.!?\"(){}";

	i = 0;

	while (*(p + i))
	{

		if (*(p + i) >= 'a' && *(p + i) <= 'z')
		{
			if (i == 0)

				*(p + 1) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(p + i - 1))

						*(p + i) -= 'a' - 'A';
				}
			}

		}
		i++;
	}
	return (p);
}
