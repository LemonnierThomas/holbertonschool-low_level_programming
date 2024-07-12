#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: a
 * @s2: a
 *
 * Return: a
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, length_s1 = 0, length_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	str = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_s1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < length_s2; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';
	return (str);
}
