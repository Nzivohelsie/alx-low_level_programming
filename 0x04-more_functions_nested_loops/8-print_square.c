#include "main.h"
#include <stdio.h>

/**
 * print_square - print hash squares
 * @size: length
 */
void print_square(int size)
{
	int h;
	int v;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (v = 0; v < size; v++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
