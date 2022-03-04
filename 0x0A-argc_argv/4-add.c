#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;
	int s = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");

			return (1);
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}
