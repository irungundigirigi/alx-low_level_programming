#include "main.h"


void print_square(int size)
{
	while(size > 1)
	{
		for(int j = 0; j <= n; j++)
			_putchar('#');
		size--;
	}
	if(size <= 0)
		putchar('\n');
}

