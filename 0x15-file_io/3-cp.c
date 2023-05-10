#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 *         97 if argc is not 3
 *         98 if file_from does not exist or cannot be read
 *         99 if file_to cannot be created or written to
 *         100 if file_to or file_from cannot be closed
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	r = 1024;
	while (r == 1024)
	{
		r = read(fd_from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

		w = write(fd_to, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}

	c1 = close(fd_from);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from),
			exit(100);

	c2 = close(fd_to);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to),
			exit(100);

	return (0);
}
