#include "main.h"
#include <stdio.h>
/**
 * times_table - times table
 */
void times_table(void)
{
	int m;
	int n;
	int t;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			t = n * m;
			printf("%d,  ", t);
		}
		printf("\n");
	}
}
