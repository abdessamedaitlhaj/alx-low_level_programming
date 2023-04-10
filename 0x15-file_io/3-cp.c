#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
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
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
						S_IRGRP | S_IWGRP | S_IROTH);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd2 = open(argv[1], O_RDONLY);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((n = read(fd2, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd1, buffer, n) == -1 || fd1 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
