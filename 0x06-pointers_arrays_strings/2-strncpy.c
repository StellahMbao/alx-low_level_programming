#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	for ( ; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
