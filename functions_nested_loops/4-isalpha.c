#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase, uppercase or letter.
 * @c: The character to be checked.
 * Return: 1 if the character is lowercase, letter or upperase 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
