#include "main.h"
/**
 * _atoi - print intergers in a string
 * @s:parameter
 * Return: always 0 or d success
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int d = 0;
	int f = 0;
	int r = 0;
	int le = 0;

	for (i = 0; s[i] != '\0'; i++)
		le++;
	while (i < le && r == 0)
	{
		if (s[i] == '-')
			n++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] + '0';
			if (n % 2 != 0)
				d = -(d);
			f = f * 10 + d;
			r = 1;
			if(s[i + 1] < '0' || s[i + 1] > '9')
				break;
			r = 0;
		}
		i++;
	}
	return (f);
}
