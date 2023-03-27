#include "main.h"
/**
 * _strchr - find character
 *@s: string
 *@c: character to find
 *Return: always 0 success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
