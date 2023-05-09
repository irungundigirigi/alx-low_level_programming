#include "main.h"


#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main -  copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int fd_input, fd_output, i_state, o_status;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Wrong Usage, three arguments needed\n"), exit(97);

    /* open src file for reading */
	fd_input = open(av[1], O_RDONLY);
	if (fd_input == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

    /* open the destination file (file_to) for writing  */
	fd_output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_output == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
	/* reads data from the source file in chunks of size MAXSIZE */
		i_state = read(fd_input, buf, MAXSIZE);
		if (i_state == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (i_state > 0)
		{
			o_status = write(fd_output, buf, (ssize_t) i_state);
			if (o_status == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (i_state > 0);
	i_state = close(fd_input);
	if (i_state == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_input), exit(100);
	o_status = close(fd_output);
	if (o_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_output), exit(100);
	return (0);
}
