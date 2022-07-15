#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * leet - encodes a string
 * @s: string to encode
 * Return: s
 */
char *leet(char *s)
{
	char a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int x, y;

	for  (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
			}
		}
	}
	return (s);
}
