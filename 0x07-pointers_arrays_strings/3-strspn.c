#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string
 * @accept: string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
	}
	return (n);
}
