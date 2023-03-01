#include "main.h"
/**
 * _strncpy - copy n bytes into buffer
 * @dest: buffer string
 * @src: string
 * @n: interger
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
