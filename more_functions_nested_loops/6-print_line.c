#include "main.h"

/**
 * print_line - print numbers in loop
 * @n: nombre de fois qu'il se rÃpÃte
 */

void print_line(int n)
{
	int i;

	for(i = 0; i > n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
