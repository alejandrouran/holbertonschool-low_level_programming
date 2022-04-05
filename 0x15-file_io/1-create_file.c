#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: create file
 * @text_content: text string
 * Return: void
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
			;
		c = write(fd, text_content, l);
	}
	if (c == -1)
		return (-1);

	close(fd);
	return (1);
}



