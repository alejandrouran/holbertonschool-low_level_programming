# include "main.h"

/**
 * leet - encodes a string into
 * @a: encode
 *
 * Return: string
 */
char *leet(char *a)
{
	int i;
	int j;
	int f[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int r[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == f[j])
			{
				a[i] = r[j / 2];
				j = 9;
			}
		}
	}
	return (a);
}
