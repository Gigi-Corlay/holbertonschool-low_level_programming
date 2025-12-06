#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_after = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_after == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		read_bytes = read(fd_from, buffer, 1024);
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd_after, buffer, read_bytes);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	} while (read_bytes > 0);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_after) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_after);
		exit(100);
	}
	return (0);
}
