#include "main.h"

/**
 *create_file - create a file, if file exists truncate it
 *@filename: name of file
 *@text_content: string to write to file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, r_state, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/* find string length*/
		for (i = 0; text_content[i] != '\0'; i++)
			;

		r_state = write(fd, text_content, i);
		if (r_state == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
