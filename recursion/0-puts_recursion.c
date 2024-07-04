#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return;
	_puts_recursion(*s + 1);
}
