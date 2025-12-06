#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* open_file_from - Opens a file in read-only mode.
* @filename: Name of the file to open.
*
* Return: The file descriptor of the opened file.
*         Exits with code 98 if the file cannot be opened.
*/
int open_file_from(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
* close_file - Closes a file descriptor and checks for errors.
* @fd: The file descriptor to close.
*
* Exit: Exits with code 100 if closing fails.
*/
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - copies the content of a file to another file.
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, exits with error codes on failure.
*/

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_after;
	ssize_t read_bytes, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open_file_from(argv[1]);
	fd_after = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_after == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_after, buffer, read_bytes);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(fd_from);
	close_file(fd_after);
	return (0);
}
