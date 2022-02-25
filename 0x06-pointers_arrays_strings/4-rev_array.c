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
	int i;
	int j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];

		a[n - 1 - j] = a[j];

		a[j] = i;
	}
}
