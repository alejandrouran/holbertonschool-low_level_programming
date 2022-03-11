#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory for an array, using malloc
 * @nmemb: number
 * @size: size
 *
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb <= 0 || size <= 0)

		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		free(c);

		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)

		c[i] = 0;

	if (c)
	{
		return (c);
	}
	return (NULL);
}
