#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char pha;

	for (pha = 'a'; pha <= 'z'; pha++)
	{

		if (pha != 'e' && pha != 'q')
		{
			putchar (pha);
		}

	}
	putchar ('\n');

	return (0);
}
