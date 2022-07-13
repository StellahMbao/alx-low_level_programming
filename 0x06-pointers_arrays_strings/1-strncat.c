#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates 2 strings
 * @dest: 1st string
 * @src: @nd string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';
	return (dest);
}
