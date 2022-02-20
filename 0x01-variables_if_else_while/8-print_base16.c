#include <stdio.h>

/**
 * main - prints all the numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int nu;
	char pha;

	for (nu = 0; nu < 10; nu++)
		putchar((nu % 10) + '0');

	for (pha = 'a'; pha <= 'f'; pha++)
		putchar(pha);

	putchar('\n');

	return (0);
}
