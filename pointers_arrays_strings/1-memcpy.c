#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: s is the pointer that point the start
 * of the block we want to fill.
 * @src: the value with which to fill the memory.
 * @n: the number of bytes.
 *
 * Return: A pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = *src;
	src++;
}
return (dest);
}
