#include "main.h"
#include <stdio.h>

/**
 * print_line - print dashes n times
 * @n: parameter
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
