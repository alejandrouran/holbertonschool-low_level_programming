#include "main.h"

int n_prime(int n, int i);

/**
 * is_prime_number - the input integer is a prime number
 * @n: prime number otherwise
 *
 * Return: Always 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)

		return (0);

	return (n_prime(n, n - 1));
}

/**
* n_prime - second fuction prime number
* @n: number
* @i: number
*
* Return: value
*/
int n_prime(int n, int i)
{
	if (i == 1)

		return (1);

	if (n % i == 0 && i > 0)

		return (0);

	return (n_prime(n, i - 1));
}
