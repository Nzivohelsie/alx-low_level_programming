#include "main.h"
/**
 * puts2 - print at interval of 2
 * @str: string
 */
void puts2(char *str)
{
	int le = 0;
	int p = 0;
	char *a = str;
	int t;

	while (*a != '\0')
	{
		a++;
		le++;
	}
	p = le - 1;
	for (t = 0; t <= p; t++)
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
	}
	_putchar('\n');
}
