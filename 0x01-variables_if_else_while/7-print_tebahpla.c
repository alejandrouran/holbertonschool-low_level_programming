#include <stdio.h>

/**
 * main - print alphabet in reverse.
 *
 * Return: Alayis 0.
 */
int main(void)

{
	char p;

	for (p = 'z'; p >= 'a'; p--)
		putchar(p);

	putchar('\n');

	return (0);
}
