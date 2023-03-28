include "main.h"

/**
 * rev_string - reverse the string
 * @s: string argument.
 */

void rev_string(char *s)
{	
	int i, z, c ;
	char h;
	//loop over string first to get the size
	
	for (i =0; s[i] != '\0'; i ++)
		;
	z = i;

	for (i--, c = 0; c < z / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
