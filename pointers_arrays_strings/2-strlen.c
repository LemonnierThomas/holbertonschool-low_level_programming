#include "main.h"

/**
 * _strlen - function that return the lenght of a string.
 * @result: result after the loop that calcul the lengt of the string
 * return(result): return string lenght
 */

int _strlen(char *s)
{
	int result;
	
	result = 0;
	
	while (result < *s)
	{
		result++;
	}
	return (result);
}
