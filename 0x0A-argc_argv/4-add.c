#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Check if all argv are numbers
 * @argV: argv
 * Return: Return true if all argv are numbers/ false if not
 */


bool is_num(char *c)
{

	int j = 0;

	for (j = 0; c[j]; j++)
	{
		if (!(c[j] >= '0' && c[j] <= '9'))
			return (0);
	}
	return (1);

}

/**
 * main - entry point/ print all arguments if all arguments are numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success/
 *
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	

	while (i < argc)
	{
		if (is_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
			
	}
	printf("%d\n", sum);

	return (0);


}

