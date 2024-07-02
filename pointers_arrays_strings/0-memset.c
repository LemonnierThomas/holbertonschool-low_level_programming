#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: s is the pointer that point the start
 * of the block we want to fill.
 * @b:the value with which to fill the memory.
 * @n:the number of bytes.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
