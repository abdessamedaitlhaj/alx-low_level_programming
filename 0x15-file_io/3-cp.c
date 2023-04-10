#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * close_fd - close file descriptor.
 * @fd: file descriptor to be closed.
 *
 * Return: nothing.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - handle cp command.
 * @argc: number of arguments.
 * @argv: the arguments passed to the command.
 *
 * Return: 0 success.
 */
int main(int argc, char **argv)
{
	int n, fd1, fd2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s %s\n",argv[0], argv[1], argv[2]);
		exit(97);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
						S_IRGRP | S_IWGRP | S_IROTH);
	fd2 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((n = read(fd2, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd1, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
