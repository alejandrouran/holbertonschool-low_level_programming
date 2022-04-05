#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * @filename: file
 * @text_content: string file
 * Return: value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
		;
		c = write(fd, text_content, l);
		if (c == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
