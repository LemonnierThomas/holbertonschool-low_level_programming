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
char charType;
long int longintType;
long long int longlongintType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu byte\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}

