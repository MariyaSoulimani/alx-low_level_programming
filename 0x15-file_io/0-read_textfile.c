#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * its contents to standard output.
 *
 * @filename: A pointer to a null-terminated string
 * containing the name of the file to be read.
 *
 * @letters: The maximum number of bytes to be read from the file.
 *
 * Return: If the function succeeds, it returns
 * the number of bytes read from the file and printed to
 * the standard output. If an error occurs, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, op;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buffer, letters);
	w = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (w);
}
