#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL || S1
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int x, y, z;

	z = 0;/* length of array*/
	array = malloc(sizeof(*s1 + *s2));

	if (array == NULL) /* empty string, no memory allocated*/
	{
		return (NULL);
	}
	x = 0;/*lenght of string 1*/
	while (s1[x] != '\0')
	{
		array[z] = s1[x]; /* contents of s1 first*/
		x++;
		z++;
	}
	y = 0;/*length of string 2*/
	while (s2[y] != '\0')
	{
		array[z] = s2[y];/*contents of s2 follow*/
		y++;
		z++;
	}
	return (array);
	free(array);
}

