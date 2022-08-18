#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little endian || 0 for big endian
 */
int get_endianness(void)
{
	/* big endian would store 00, little would store 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
