#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print multiplication table
 * @n: parameter
 */
void print_times_table(int n)
{
	int a;
	int b;
	int i;

	if (n > 0 || n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				i = a * b;
				printf("%d, ", i);
			}
			printf("\n");
		}
	}
}
