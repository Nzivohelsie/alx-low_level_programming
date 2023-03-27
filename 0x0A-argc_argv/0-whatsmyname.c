#include <stdio.h>
/**
 * main - print name of call function
 * @argc: argument count
 * @argv: array of pointer to input strings
 * Return: 0 success
 */
int main(int argc, char *argv [])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
