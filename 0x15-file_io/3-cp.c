#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates memory for a buffer.
 * @file: The name of the file being processed.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Return: No return value.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: On success, return 0. On failure, return 97, 98, 99 or 100.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
	}

	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
