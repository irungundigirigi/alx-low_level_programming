#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: size to read
 * Return: size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size_r, size_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	size_r = read(fd, buffer, letters);
	if (size_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	size_w = write(STDOUT_FILENO, buffer, size_r);
	if (size_w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (size_r);
}
