#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry function
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", o(i, j));

	return (0);
}
