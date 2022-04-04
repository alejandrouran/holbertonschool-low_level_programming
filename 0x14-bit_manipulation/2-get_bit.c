#include "main.h"

/**
 * get_bit - function that returns the value
 * @n: bit to index
 * @index: index
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n >> index & 1);
}
