#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * it with a specific char.
 * @str: a
 *
 * Return: a
 */

char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
	{
		return ('\0');
	}
	len = strlen(str) + 1;
	duplicate = malloc(len);

	if (duplicate == NULL)
	{
		return ('\0');
	}
	memcpy(duplicate, str, len);
	return (duplicate);
}
