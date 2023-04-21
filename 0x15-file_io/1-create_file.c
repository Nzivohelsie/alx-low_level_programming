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
	char *str;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	str = text_content;
	for (j = 0; str[j] != '\0'; j++)
		i += 1;
	if (str != NULL)
	{
		chars_write = write(fd, text_content, i);
		if (chars_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
