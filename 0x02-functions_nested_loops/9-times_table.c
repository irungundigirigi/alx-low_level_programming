#include "main.h"

/**
  * times_table - Function
  * Description: Prints the 9 times table.
  * @void: no parameters
  * Return: 1 if n is greater than zero / 0 if zero / -1 if less than 0
  */
int times_table(void)
{	
	int num, x, prod;

	for(num =0; num <= 9; num++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			prod = num * x;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
	_putchar('\n');	

	}	
}

