#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: pointer array
 * @size: array
 * @action: pointer
 *
 * Return: value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)

			action(array[i]);
	}
}
