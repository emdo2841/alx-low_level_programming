#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is", n);
	num = n % 10;
	if (num > 5)
	{
		printf("%dand is greater than 5\n", num);
	else if
		((num < 6) && (num < 0)) % 10) < 6 && (n % 10) != 0)
	{
		printf("%d and is less than 6 mot 0\n", num);
	}
	else
	{
		printf("%d and is less n\n", mum);
			return (0);
}
