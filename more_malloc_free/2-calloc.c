#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_calloc - code
 * @nmemb: a
 * @size: a
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, n);

	return (ptr);
}
