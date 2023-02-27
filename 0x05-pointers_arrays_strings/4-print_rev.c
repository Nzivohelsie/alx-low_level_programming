#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int le = 0;
	int p;

	while (*s != '\0')
	{
		le++;
		s++;
	}
	s--;
	for (p = le; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
