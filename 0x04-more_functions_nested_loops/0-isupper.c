#include "main.h"

/**
 * _isupper - Checks if the letter passed as argument is uppercase.
 * Description: Checks the ASCII value of c to determine its case.
 * @c:number to the checked
 * Return: 1 if uppercase and 0 if lowercase
 */
 
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
