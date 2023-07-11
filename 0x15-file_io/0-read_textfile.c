#include "main.h"


/**
 * read_textfile - reads file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t r_len, w_len;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r_len = read(fd, buffer, letters);
	close(fd);
	if (r_len == -1)
	{
		free(buffer);
		return (0);
	}
	w_len = write(STDOUT_FILENO, buffer, r_len);
	free(buffer);

	return ((r_len == w_len) ? w_len : 0);
}
