#include "main.h"
#include <string.h>

/**
 * create_file - fuction that creates a file
 * @filename: pointer to the file to be created
 * @text_content: pointer to NULL terminated string to write to the file
 *
 * Return: NULL terminated string to write to the file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	wrt = write(fd, text_content, len);
	if (wrt != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
