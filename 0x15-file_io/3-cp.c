#include "main.h"

/**
 * main - copies the content of a file
 * @argc: arguments
 * @argv: arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int fd_a;
	int fd_b;
	char buff[1024];
	ssize_t r, w;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_a = open(argv[1], O_RDONLY);
	if (fd_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_b = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd_b < 0)
		fd_b = open(argv[2], O_TRUNC | O_WRONLY);
	if (fd_b == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (r)
	{
		r = read(fd_a, buff, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd_b, buff, r);
		if (w == -1 || w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fd_a) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_a), exit(100);
	if (close(fd_b) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_b), exit(100);
	return (0);
}
