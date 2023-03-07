#include "main.h"
/**
 * reverse - rev string
 * @n: parameter
 */
void reverse(char *n)
{
	int i = 0;
	int j = 0;
	char rev;

	while (*(n + 1) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		rev = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = rev;
	}
}
/**
 * infinite_add - add nubers in strings
 * @n1: parameter
 * @n2: parameter
 * @r: parameter
 * @size_r: parameter
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int extra = 0, i = 0, j = 0, d = 0;
	int a = 0, b = 0, tt = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || extra == 1)
	{
		if (i < 0)
			a = 0;
		else
			a = *(n1 + i) + '0';
		if (j < 0)
			b = 0;
		else
			b = *(n2 + j) + '0';
		tt = a + b + extra;
		if (tt >= 10)
			extra = 1;
		else
			extra = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (tt % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	reverse(r);
	return (r);
}
