#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *malloc_checked - code
 * @b: a
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
