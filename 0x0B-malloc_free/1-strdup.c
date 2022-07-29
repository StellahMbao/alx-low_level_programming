#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: string
 * Return: NULL || pointer to array
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i)
		length++, i++;
	length++;
	array = malloc(sizeof(char) * length);

	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
		*(array + i) = *(str + i);
		i++;

	return (array);

}
