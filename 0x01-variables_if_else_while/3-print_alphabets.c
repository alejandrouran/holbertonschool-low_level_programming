#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pha;
	for (pha = 'a'; pha <= 'z'; pha++)

        {
		putchar (pha);
	}

	for (pha = 'A'; pha <= 'Z'; pha++)
	{
		putchar(pha);
	}

        putchar('\n');

	return (0);
}
