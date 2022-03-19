#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)

	{
		printf("%d", va_arg(l, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

}
	printf("\n");

	va_end(l);
}
