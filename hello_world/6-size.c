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
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
return (0);
}

