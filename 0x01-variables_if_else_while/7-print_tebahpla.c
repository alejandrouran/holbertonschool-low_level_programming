#include <stdio.h>

/**
 * main - print alphabet in reverse.
 *
 * Return: Alayis 0.
 */
int main(void)

{
	char pha;
	for (pha = 'z'; pha >= 'a'; pha--)
	{
		putchar(pha);
	}
	putchar('\n');
	return (0);
}
