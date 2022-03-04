# include <stdio.h>
# include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number arguments
 * @argv: arrays argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, m = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
		printf("%d\n", m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
