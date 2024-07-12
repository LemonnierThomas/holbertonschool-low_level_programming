#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * it with a specific char.
 * @str: string to duplicate
 *
 * Return: a
 */

char *_strdup(char *str)
{
	int len;
	int n;
	char *duplicate;

	if (str == NULL)
	{
		return ('\0');
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	{
		return ('\0');
	}
	for (n = 0; n < len; n++)
	{
		duplicate[n] = str[n];
	}

	duplicate[len] = '\0';
	return (duplicate);
}
