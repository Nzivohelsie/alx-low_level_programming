#include "main.h"
/**
 * puts_half - print last half of string
 * @str: input
 */
void puts_half(char *str)
{
	int n;
	int le = 0;
	int i;
	char *p = str;

	while (*p != '\0')
	{
		le++;
		p++;
	}
	if ((le % 2) != 0)
	{
		n = ((le + 1) / 2);
		for (i = n; i < le; i++)
		_putchar(str[i]);
	}
	else
	{
		n = (le / 2);
		for (i = n; i < le; i++)
			_putchar(str[i]);
	}
	_putchar('\n');

}
