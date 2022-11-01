#include <stdio.h>

/**
 * main - our entry point
 *
 * return always 0.
 */

void change(int *a)
{
	*a = 50;
}


int main(void)
{
        int *int_ptr;

	int num = 10;

	int_ptr = &num;

	printf("value of int before is %d\n", num);

	change(int_ptr);

	printf("value of int after is %d\n", num);

        return (0);
}

