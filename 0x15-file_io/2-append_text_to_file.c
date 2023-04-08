#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to be treated.
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success. -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	while(*text_content++)
		if(write(fd, text_content, 1) == -1)
			return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
