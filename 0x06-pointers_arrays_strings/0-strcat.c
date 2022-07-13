#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: 0 for success
 */
char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
