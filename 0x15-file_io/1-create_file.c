#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - create file if it doesnt exist and write into it
 * @filename: file to create
 * @text_content: null terminated string
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j;
	size_t i = 0;
	ssize_t chars_write;
	ssize_t chars_read = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
		{
			i += 1;
			chars_read += 1;
		}
		chars_write = write(fd, text_content, i);
		if (chars_write == -1 || chars_read != chars_write)
			return (-1);
	}
	close(fd);
	return (1);
}
