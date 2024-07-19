#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: aa
 * @n: aa
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	const char *ptr;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, const char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
