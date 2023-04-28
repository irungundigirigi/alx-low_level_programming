#include <stdio.h>

void __attribute__((constructor)) print(vooid);

/**
 * print - prints statement before the main function is run.
 */
void print(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
