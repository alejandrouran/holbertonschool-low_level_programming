#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array
 * @n: the number
 *
 * Return; no value
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = 0; j < n; j++)
		;
	{
		a[n - 1 - j] = a[j];
	}
	for (i = 0; i < n; i++)
	{
		a[j] = a[i];
	}
}
