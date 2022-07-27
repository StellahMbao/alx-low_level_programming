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
	int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';

	return (array);
}
