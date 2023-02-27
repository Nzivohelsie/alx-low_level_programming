#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 */
void rev_string(char *s)
{
	char r = s[0];
	int le = 0;
	int v;

	while (s[le] != '\0')
		le++;
	for (v = 0; v < le; v++)
	{
		le--;
		r = s[v];
		s[v] = s[le];
		s[le] = r;
	}
}
