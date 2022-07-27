#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * Return: NULL || Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
		i++;
	}
	return (array);
}
