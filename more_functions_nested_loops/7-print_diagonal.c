#include "main.h"

/**
 * print_diagonal - print numbers in loop
 * @n: nombre de fois qu'il se rÃpÃte
 */

void print_diagonal(int n)
{
	int i;
	int g;

	if (n >= 0)
	for (i = 0; i < n; i++)
	{
		for (g = 0; g < i; g++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
		_putchar ('\n');
}
