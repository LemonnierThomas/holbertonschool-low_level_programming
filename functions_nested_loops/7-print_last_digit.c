#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @a: The integer whose last digit is to be printed.
 *
 * Return: The last digit of the number @a.
 */


int print_last_digit(int a)

{
	int last_digit = a % 10;

	_putchar(a + last_digit);
	return (last_digit);
}
