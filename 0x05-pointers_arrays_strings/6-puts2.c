#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
		{
			-putchar(stri[i]);
		}
		_putchar('\n');
	}
}
