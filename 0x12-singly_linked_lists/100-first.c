#include <stdio.h>

void printfunc(void) __attribute__((constructor));

/**
 * printfunc - function that prints string before the main function is executed
 */
void printfunc(void)
{
	printf("You're beat! and yet; you must allow,\n");
	printf("I bore my house upon my back!\n");
}
