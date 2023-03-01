#include "main.h"
/**
 * _atoi - print intergers in a string
 * @s:parameter
 * Return: always 0 or f success
 */
int _atoi(char *s)
{
	int le = 0;
	int i, a;
	int n = 0;
	int d = 0;
	int z = 0;
	int f = 0;
	int r = 0;

	for (a = 0; s[a] != '\0'; a++)
		le++;
	for (i = 0; i < le; i++)
	{
		f (s[i] == '-')
			n++;
		if (s[i] >= 0 && s[i] <= 9)
		{
			d = s[i] + '0';
			if (n % 2 != 0)
				d = -(d);
			f = (z * 0) + d;
			r = 1;
			if (s[i + 1] < 0 || s[i + 1] > 9)
			{
				break;
				r = 0;
			}
		}
	}
	if (r == 0)
		return (0);
	return (f); 
}
