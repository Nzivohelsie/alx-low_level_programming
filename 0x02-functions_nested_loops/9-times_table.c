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
			if(n == 0)
			{
				printf("%d", t);
			}
			else if(t < 10 && n != 0)
			{
				printf(",  %d", t);
			}
			else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		printf("\n");
	}
}
