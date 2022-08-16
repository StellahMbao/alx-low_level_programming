#include <stdio.h>

/**
 * execute_main - executes function befor main function
 * Note: made possible by prior declaration of "__attribute__ ((constructor))"
 */
void __attribute__ ((constructor)) execute_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
