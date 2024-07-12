#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *array_range - code
 * @min: a
 * @max: a
 *
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
