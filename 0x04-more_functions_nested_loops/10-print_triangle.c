#include <stdio.h>
#include "main.h"

/**
 *print_triangle - triangle
 * @size: interger
 */

void print_triangle(int size)
{
	int h;
	int s;
	int v;

	if (size > 0)
	{
	for (h = 1; h <= size; h++)
	{
		for (s = 1; s <= (size - h); s++)
		{
			putchar(' ');
		}
		for (v = 1; v <= h; v++)
		{
			putchar('#');
		}
		{
		putchar('\n');
		}
	}
	}
	else
	{
		putchar('\n');
	}
}
