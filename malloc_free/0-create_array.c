#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: taille du tableau.
 * @c: char du tableau.
 *
 * Return: NULL si size = 0 ou si fail, sinon return str.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return ('\0');
	}

	for (n = 0; n < size; n++)
	{
		str[n] = c;
	}

	return (str);
}
