#include "main.h"
#include <stdio.h>

/**
 * print_array - array
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", *a);
			a++;
		}
		else
		{
		printf("%d, ", *a);
		a++;
		}
	}
	printf("\n");
}
