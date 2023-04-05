#include "main.h"

/**
* is_prime_number - returns 1 if the input integer is a prime number.
* @n: Input integer to be checked.
* Return: 1 if integer is a prime number.
*/


int is_prime_number(int n) 
{
    int divisor = 3;

    if (n % 2 == 0 || n < 2)
        return (0);
    if (n == 2)
        return (1);

    return (is_prime(n, divisor));    
}

/**
* is_prime - recursively tests if n is prime.
* @n: check this number
* divisor: divides n with divisor to check.
*/

int is_prime(int n, int divisor)
{
    if (divisor > n/2)
        return (1);
    if (n % divisor == 0)
        return (0); 
    return(is_prime(n, divisor + 1));  
}
