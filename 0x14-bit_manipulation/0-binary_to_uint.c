#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: pointer to string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		n = n << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			n = n | 1;
		b++;
	}
	return (n);
}
