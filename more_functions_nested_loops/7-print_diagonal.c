#include "main.h"

/**
 * print_diagonal - print numbers in loop
 * @n: nombre de fois qu'il se rÃpÃte
 */

void print_diagonal(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
		_putchar('\n');
	}
}
