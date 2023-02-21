#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
			if (a != b && a < b)
			{
			putchar(a);
			putchar(b);

				if (a + b != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
	putchar('\n');
	return (0);

}
