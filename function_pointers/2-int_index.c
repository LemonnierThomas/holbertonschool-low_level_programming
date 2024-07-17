#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - aa
 * @array: aa
 * @size: aa
 * @cmp: aa
 *
 * Return: return -1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
