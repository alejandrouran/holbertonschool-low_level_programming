#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, s;


	for (i = 1, s = 0; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");

			return (1);
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}
