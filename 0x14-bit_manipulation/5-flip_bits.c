#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int c = 0;

	c = n ^ m;

	while (c >= 1)
	{
		if ((c & 1) == 1)
		i++;
		c >>= 1;
	}
	return (i);
}
