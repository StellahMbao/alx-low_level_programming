#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: where range stars
 * @max: where range ends
 * Return: pointer to created array || NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
