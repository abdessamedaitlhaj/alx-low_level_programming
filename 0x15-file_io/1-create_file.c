#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to be created.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, n;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (-1);
		while (text_content[i])
		i++;
		n = write(fd, text_content, i);
		if (n == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
