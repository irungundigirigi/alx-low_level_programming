#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content to be written on file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int letter_count, fd, rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	letter_count = 0;
	while (text_content[letter_count])
	{
		letter_count++;
	}

	rwr = write(fd, text_content, letter_count);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
