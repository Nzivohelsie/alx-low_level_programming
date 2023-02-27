#include "main.h"
/**
 * puts_half - print last half of string
 * @str: input
 */
void puts_half(char *str)
{
	int s;
	int n;
	int le;
	int p;

	for (s = 0; str[s] != '\0'; s++)
	{
		le++;
	}
	if ((le % 2) == 1)
	{
		n = ((le - 1) / 2);
		p = n + 2;
		for (s = p; str[s] != '\0'; s++)
		_putchar(str[s]);
	}
	else
	{
		n = (le / 2);
		p = n + 1;
		for (s = p; str[s] != '\0'; s++)
			_putchar(str[s]);
	}
	_putchar('\n');

}
