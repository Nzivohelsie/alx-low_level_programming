#include <stdio.h>
/**
 * main - Entry point
 * description - print all except q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
