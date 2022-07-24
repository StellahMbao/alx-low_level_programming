#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int sum, val, i;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
