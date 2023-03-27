#include "main.h"
/**
 * _strstr - find string occurence
 * @haystack: string
 * @needle: string
 * Return: always 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		return (haystack);
	}
	return (0);
}
