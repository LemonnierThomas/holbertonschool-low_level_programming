#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: the integer whose absolute value is to be computed
 * Return: absolute value of @a
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	return (a);
}
