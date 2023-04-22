#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int copy_to_file(const char *file_from, char *file_to);
/**
 * main - entry
 * @ac: argumrnt count
 * @av: arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(av[1], av[2]);
	return (0);
}
/**
 * _close - close fd
 * @fd: fd to close
 * Return: 0 on success
 */
int _close(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
/**
 * copy_to_file - copy file contents
 * @file_from: from
 * @file_to: to
 * Return: 1 0n success
 */
int copy_to_file(const char *file_from, char *file_to)
{
	int fd_1, fd_2, j;
	size_t size = 1024, i = 0;
	ssize_t  chars_read, chars_write;
	void *buffer;

	fd_1 = open(file_from, O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buffer = malloc(size * sizeof(char));
	chars_read = read(fd_1, buffer, size);
	for (j = 0; j < chars_read; j++)
	{
		i += 1;
	}
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);
	chmod(file_to, 00664);
	chars_write = write(fd_2, buffer, i);
	if (chars_write == -1 || fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	_close(fd_1);
	_close(fd_2);
	free(buffer);
	return (1);
}
