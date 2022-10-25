#include "main.h"
#include <stdio.h>

/**
* print_array - input num of array
* followed by a new line
* @a: array
* @n: number of element to print
*/

void print_array(int *a, int n)
{
	int index
		(index = 0; index < n; index++)
		{
			printf("%d", a[index]);
			if (index == n - 1)
				continue;

			printf("\n ");
		}
}

