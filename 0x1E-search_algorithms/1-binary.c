#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search
 *
 * Return: void
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	if (array == NULL || size == 0)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = (left + right) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}
