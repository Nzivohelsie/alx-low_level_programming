#include "main.h"
/**
 * _memset - put a char into n bytes of memory
 * @s: string
 * @b: character
 * @n: size of memory
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p = s;
	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (p);
}
