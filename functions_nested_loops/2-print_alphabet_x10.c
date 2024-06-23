#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet_x10 - Prints the alphabet ten times
*/

void print_alphabet_x10(void)

{
	int a;

	while (a < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;

	}
}

