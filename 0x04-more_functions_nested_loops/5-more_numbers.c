#include "main.h"
#include <stdio.h>

/**
 * more_numbers - 10x
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				putchar(i + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
		}
		printf("\n");
	}
}
