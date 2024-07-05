#include "main.h"

/**
 * factorial - fonction qui calcule le factoriel.
 * @n: valeur de n.
 *
 * * Return: -1 si negatif, 1 si n = 0, sinon relance factoriel de n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
