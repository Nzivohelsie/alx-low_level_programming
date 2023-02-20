#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);

}
