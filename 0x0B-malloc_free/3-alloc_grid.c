#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: columns
 * @height:rows
 * Return: NULL || pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;
/**If width or height is 0 or negative, return NULL*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));/* allocate memory for rows*/
	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)/* allocate memory for columns in each row*/
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}



