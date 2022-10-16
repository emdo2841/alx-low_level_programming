#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print random number
 * print positive if it is greater than 0
 * print negative if is less than 0
 * return:0;
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("$d is positive\n", n);
	if else (n < 0)
		printf("$d is negative\n", n);
	else
		printf("$d is zero\n", n);
	return (0);
}
