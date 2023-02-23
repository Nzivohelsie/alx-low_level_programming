#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - not 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 4 || n == 2)
		{
			continue;
		}
		putchar(n + '0');
	}
	putchar('\n');
}
