#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Creates a file and writes text_content to it.
* @filename: The name of the file to create.
* @text_content: The NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*         If filename is NULL, or the file cannot be created or written to,
*         the function returns -1.
*         The created file has permissions rw-------.
*         If text_content is NULL, an empty file is created.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
