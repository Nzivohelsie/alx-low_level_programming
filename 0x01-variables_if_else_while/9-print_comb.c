#include <stdio.h>
/**
 * main - entry
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	if (n == '9')
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
