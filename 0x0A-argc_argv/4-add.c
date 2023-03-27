#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - sum of numbers
 * @argc: argument count
 * @argv: array of string pointers
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int s, sum = 0;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (s = 0; s < strlen(c); s++)
			{
				if (c[s] < 48 || c[s] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
