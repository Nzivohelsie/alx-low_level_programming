#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - read and print to posix std output
 * @filename: pints to file to be read
 * @letters: no. of bytes to be read
 *
 * Return: no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars_read, chars_write, j;
	void *buffer;
	size_t i = 0;

	buffer = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	chars_read = read(fd, buffer, letters);
	if (chars_read == -1)
		return (0);
	for (j = 0; j < chars_read; j++)
		i += 1;
	chars_write = write(STDOUT_FILENO, buffer, i);
	if (chars_write == -1 || chars_write != chars_read)
		return (0);
	free(buffer);
	close(fd);
	return (chars_read);
}
