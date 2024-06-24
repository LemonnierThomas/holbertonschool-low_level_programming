#include "main.h"

/**
 * more_numbers - print numbers in loop
 */

void more_numbers(void)
{
	int c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		if (c > '9'; )
		{
			_putchar();
		}
		_putchar('\n');
	}
}
