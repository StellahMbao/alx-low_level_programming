#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps 2 integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}


