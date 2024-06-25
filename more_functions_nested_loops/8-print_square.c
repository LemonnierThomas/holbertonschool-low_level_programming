#include "main.h"

/**
 * print_square - print square
 * @size: taille du carrÃ.
 */

void print_square(int size)
{
	int g;
	int i;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (g = 0; g < size; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar ('\n');
}
