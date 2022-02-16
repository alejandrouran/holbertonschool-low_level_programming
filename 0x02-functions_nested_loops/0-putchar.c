#include "main.h"

/**
 * main - prints followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int l = 0;
	char c[] = "_putchar\n";

	while (l <= 9)
	{
		_putchar(l);
		l++;
	}
	return (0);
}
