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
	int i, length;

	array = malloc(sizeof(str));
	i = length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
