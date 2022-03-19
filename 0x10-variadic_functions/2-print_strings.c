#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: separator
 * @n:numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *i;
	unsigned int j = 0;
	va_list l;

	va_start(l, n);

	for (j = 0; j < n; j++)
	{
		i = va_arg(l, char *);

		if (i == NULL)

			printf("(nil)");

		else

			printf("%s", i);

		if (separator != NULL && j < (n - 1))

			printf("%s", separator);
	}
	printf("\n");

	va_end(l);
}
