#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_array - reverses contents in an array
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x, y = 0;
	int z = n - 1;

	while (y < x)
	{
		x = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = x;
		y++, z--;
	}
}
