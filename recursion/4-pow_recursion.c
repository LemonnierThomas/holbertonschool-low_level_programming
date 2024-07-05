#include "main.h"

/**
 * _pow_recursion - fonction qui calcule le factoriel.
 * @x: valeur de n.
 * @y: valeur de y.
 *
 * * Return: -1 si y est negatif sinon relance la recursion.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
