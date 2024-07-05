#include "main.h"

/**
 * main - main function.
 * @argc: Argcount
 * @argv: Argvector
 *
 * Return: return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *c = argv[0];

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
