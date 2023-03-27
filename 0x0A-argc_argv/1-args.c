#include <stdio.h>
/**
 * main - print argc
 * @argc: argument count
 * @argv: array of pointer to string of input
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
