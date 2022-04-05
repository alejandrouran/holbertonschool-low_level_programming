#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: file
 * @letters: letters
 * Return: void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (r);
}
