#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)

		sum += va_arg(l, int);

	va_end(l);

		return (sum);
}
