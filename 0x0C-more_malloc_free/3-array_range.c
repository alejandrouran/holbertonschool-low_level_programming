#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: array
 * @max: array
 *
 * Return: value
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j;

	if (min > max)

		return (NULL);

	j = max - min + 1;

	p = malloc(sizeof(int) * j);

	if (p == NULL)

		return (NULL);

	for (i = 0; i < j; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
