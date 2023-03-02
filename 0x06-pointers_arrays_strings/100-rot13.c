#include "main.h"
/**
 * rot13 - rotate letters by 13
 * @n: parameter
 * Return: n
 */
char *rot13(char *n)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, z;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (z = 0; a[z] != '\0'; z++)
		{
			if (n[i] == a[z])
			{
				n[i] = b[z];
				break;
			}
		}
	}
	return (n);
}
