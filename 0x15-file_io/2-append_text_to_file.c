#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - append filename
 * @filename: file in question
 * @text_content: text to use
 *
 * Return: i 0n success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j;
	ssize_t chars_write;
	ssize_t chars_read = 0;
	size_t i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	for (j = 0; text_content[j] != '\0'; j++)
	{
		i += 1;
		chars_read += 1;
	}
	if (text_content != NULL)
	{
		chars_write = write(fd, text_content, i);
		if (chars_write == -1 || chars_write != chars_read)
			return (-1);
	}
	return (1);
}
