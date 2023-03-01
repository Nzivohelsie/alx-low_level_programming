#include "main.h"
/**
 * leet - encode into 1337
 * @i: parameter
 * Return: i
 */
char *leet(char *i)
{
	int m, n;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (m = 0; i[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (i[m] == a[n])
			{
				i[m] = b[n];
			}
		}
	}
	return (i);
}
