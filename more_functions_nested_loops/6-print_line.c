#include "main.h"

/**
 * print_line - print numbers in loop
 * @n: nombre de fois qu'il se r√p√te
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
