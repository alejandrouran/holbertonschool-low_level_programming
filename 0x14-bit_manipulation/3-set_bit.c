#include "main.h"

/**
* set_bit - function that sets the value of a bit
* @n: pointer
* @index: index
* Return: Returns: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
