#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: return the value of c.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				break;
			}
		}
		if (*a == '\0')
		{
			break;
		}
		c++;
		s++;
	}
	return (c);
}
