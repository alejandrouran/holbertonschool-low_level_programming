#include <stdio.h>

/**
 * main - single digit numbers of base 10.
 *
 * Return: Always 0.
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	putchar ('\n');
	return (0);
}
