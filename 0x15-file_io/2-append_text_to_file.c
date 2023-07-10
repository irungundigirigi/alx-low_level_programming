#include "main.h"

/**
 * append_text_to_file - appends text to EOF
 * @filename: file
 * @text_content: text to be added
 *
 * Return: 1 if file exists, -1 if failed
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letter_count;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{	
		letter_count = 0;

		while (text_content[letter_count])
		{
			letter_count++;
		}

		rwr = write(fd, text_content, letter_count);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

