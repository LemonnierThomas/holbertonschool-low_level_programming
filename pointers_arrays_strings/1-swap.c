#include "main.h"

/**
 * swap_int - reset the value of the pointed variable to 98.
 * @a: pointers
 * @b: variables
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
