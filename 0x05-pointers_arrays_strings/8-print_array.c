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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
