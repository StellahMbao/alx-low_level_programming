#include "main.h"
#include <stdio.h>

/**
 * main -  program that prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]); /* print string followed by a new line*/
	}
	return (0);
}
