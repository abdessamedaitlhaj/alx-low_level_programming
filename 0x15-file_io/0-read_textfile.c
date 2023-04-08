#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of the file to be printed.
 * @letters: number of letters should be printed.
 *
 * Return: number of letters readed and printed. 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, m;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf)
	{
		n = read(fd, buf, letters);

		if (n == -1)
			return (0);

		m = write(1, buf, letters);

		if (m == -1)
			return (0);

		close(fd);
	}

	return (m == n ? m : 0);
}
