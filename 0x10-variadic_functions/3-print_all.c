#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *st;
	va_list l;

	va_start(l, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(l, int));
			break;
		case 'i':
			printf("%d", va_arg(l, int));
			break;
		case 'f':
			printf("%f", va_arg(l, double));
			break;
		case 's':
			st = va_arg(l, char*);
			if (format[i] == '\0')
			{
				printf("(nil)");
				break;
			}
			printf("%s", st);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0' && format)
			printf(", ");
		i++;
	}
	va_end(l);
	printf("\n");
}
