#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write content
 * Return: 1 on success || -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	/* create file*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	_write = write(fd, text_content, strlen(text_content));
	if (_write == -1 || _write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
