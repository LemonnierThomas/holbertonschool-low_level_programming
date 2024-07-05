#include "main.h"

/**
 * factorial -
 *
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	factorial(n - 1);
}
