#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of a file
 * @text_content: string to be appended
 * Return: 1 on success / -1 on failure
 */

int append_text_to_file (const char *filename, char *text_content)
{
	int fd, state, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	state = write(fd, text_content, i);
	if (state == -1)
		return (-1);

	close(fd);
	return(1);
}
