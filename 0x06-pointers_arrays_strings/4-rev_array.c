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
	int temp;
	int x;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
	for (x = 0; x < n; x++)
	{
		printf("%d, ", a[x]);
	}
}
