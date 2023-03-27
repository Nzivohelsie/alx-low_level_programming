#include "main.h"
/**
 * _memcpy - copy n bytes of memory
 * @dest: buffer string
 * @src: string
 * @n: number of bytes
 * Return: pointer tp src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *p = dest;

	for (i = 0; n > 0; i++, n--)
		dest[i] = src[i];
	return (p);
}
