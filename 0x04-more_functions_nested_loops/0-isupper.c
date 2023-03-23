#include "main.h"

/**
 * _isupper - function name
 * Description: Checks if the letter passed as argument is uppercase.
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isupper(int c) 
{	char letter = c + '0';
	if (letter >= 65 && letter <= 90)
		return (1);
	else
		return (0);
}	
