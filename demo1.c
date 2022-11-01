#include <stdio.h>

/**
 * main - our entry point
 *
 * return always 0.
 */

int main(void)
{
	char *char_ptr;
	int *int_ptr;

	printf("address of the pointer char_ptr is %p\n", &char_ptr);

	printf("address of the pointer int_ptr is %p\n", &int_ptr);
	
	return (0);
}

