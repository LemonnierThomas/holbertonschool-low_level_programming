#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_nconcat - code
 * @s1: a
 * @s2: a
 * @n: a
 *
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, length_s1 = 0, length_s2 = 0;

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

	str = malloc(sizeof(char) * (length_s1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_s1; i++)
	{
		str[i] = s1[i];
	}
	
	while (length_s2 < n)
	{
		str[length_s1 + length_s2] = s2[length_s2];
		length_s2++;
	}

	str[length_s1 + length_s2] = '\0';
	return (str);
}
