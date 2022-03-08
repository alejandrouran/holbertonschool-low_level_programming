#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a two dimensional array of integers
 * @width: array
 * @height: array
 *
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, l;

	if (width <= 0 || height <= 0)

		return (NULL);

	s =  (int **)malloc(sizeof(int *) * height);

	if (s == NULL)

		return (NULL);

	for (i = 0; i < height; i++)
	{

		s[i] = (int *)malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{

			for (l = 0; l < i; l++)

				free(s[l]);

			free(s);

			return (NULL);
		}

		for (l = 0; l < width; l++)
		{
			s[i][l] = 0;

		}
	}

	return (s);
}
