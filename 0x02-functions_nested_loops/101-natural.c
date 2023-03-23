#include "main.h"

/**
  * fibonachi
  * @n: parameter passed to the function for checking.
  * Return: value of last digit
  */
int fibonachi(int n)
{

	int sum;

	for(int i = 1; i < n; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
		{	
			sum += i;
		}	

}
int main(void) 
{
	fibonachi(int n);
}	
