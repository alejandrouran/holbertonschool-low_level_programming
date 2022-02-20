#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n
 *
 * Return: Always 0.
 */
int main(void)
{
	int nu;

	srand(time(0));
	nu = rand() - RAND_MAX / 2;

	if (nu > 0)
	{
		printf("%d is positive\n", nu);
	}
	else if (nu == 0)
	{
		printf("%d is zero\n", nu);
	}
	else
	{
		printf("%d is negative\n", nu);
	}

	return (0);
}
