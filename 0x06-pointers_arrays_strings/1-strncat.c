#include "main.h"
/**
 * _strncat - append string 1 onto string 2
 * @dest: sting 2
 * @src: string 1
 * @n: length to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, i;
	int l = 0;
	int le = 0;
	char *p = dest;

	for (a = 0; dest[a] != '\0'; a++)
		le++;
	for (b = 0; src[b] != '\0'; b++)
		l++;
	for (i = 0; i < le; i++)
		dest[i] = dest[i];
	if (n > l)
	{
	for (i = le; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';
	}
	else
	{
		for (i = le; i < (le + n); i++)
		{
			dest[i] = *src;
			src++;
		}
	}
	return (p);
}
