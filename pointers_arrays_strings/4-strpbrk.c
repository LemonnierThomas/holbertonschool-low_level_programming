#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: return the value of c.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
