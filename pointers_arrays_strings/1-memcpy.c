#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointers to buffer.
 * @src: pointers to buffer2 + 50.
 * @n: the number of bytes.
 *
 * Return: return dest value.
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
