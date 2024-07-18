#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - aa
 * @n: a
 *
 * Return: the result.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int result;

	va_start(list, n);

	while (i < n)
	{
		result += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (result);
}
