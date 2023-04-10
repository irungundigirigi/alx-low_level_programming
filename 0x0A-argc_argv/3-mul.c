#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if no error
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc < 3)
	{
		printf("Error\n");
	}else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (1);
}

