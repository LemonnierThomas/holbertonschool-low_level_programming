#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: name will be printed.
 * @f: a
 */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;

	if (name != NULL && p != NULL)
	{
		p(name);
	}
}
