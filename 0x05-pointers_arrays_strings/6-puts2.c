#include "main.h"
/**
 * puts2 - print at interval of 2
 * @str: string
 */
void puts2(char *str)
{
	int le = 0;
	int t;
	char *r = str;	

	while (*r != '\0')
	{
		r++;
		le++;
	}
	for (t = 0; t < le; t++)
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
	}
	_putchar('\n');
}
