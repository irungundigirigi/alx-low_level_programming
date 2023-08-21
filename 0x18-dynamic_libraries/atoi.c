#include "main.h"
/**
 * atoi - converts the sing argument str to an integer.
 * @c: The character to be checked.
 *
 * Return: 1 if character is alphabet, 0 otherwise.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1; 

    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }
    return result * sign;
}

