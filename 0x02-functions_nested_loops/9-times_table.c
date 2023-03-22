#include "main.h"

/**
  * times_table - Function
  * Description: Prints the 9 times table.
  * @void: no parameters
  * Return: No return
  */
void times_table(void)
{	
	int num, x, prod;

	for (num =0; num <= 9; num++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

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

