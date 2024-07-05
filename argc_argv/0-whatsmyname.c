#include "main.h"
#include <stdio.h>

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
		putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);
}
