#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, n % 10);
	if ((n % 10) > 5)
		printf("and is greater than 5");
	else if ((n % 10) == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0\n");
		return (0);
}
