#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: array of string pointers
 * Return: solution
 */
int main(int argc, char *argv[])
{
	int m = 1;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m = m * atoi(argv[i]);
		}
		printf("%d\n", m);
	}
	return (0);
}
