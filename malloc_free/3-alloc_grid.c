#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - code
 * @height: height
 * @width: width
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int n;
	int c;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		array[n] = malloc(sizeof(int) * width);
		if (array[n] == NULL)
		{
			c = 0;
			while (c < n)
			{
				free(array[c]);
				c++;
			}
			free(array);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			array[n][c] = 0;
		}
	}
	return (array);
}
