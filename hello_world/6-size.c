#include<stdio.h>
/**
 * main - program that prints exactly the size of
 *        various types on the computer it is compiled and run on.
 * Return: 0
*/

int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
long longType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long: %zu byte\n", sizeof(longType));
return (0);
}
