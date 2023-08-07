#include "main.h"

/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	i = j = 0;
	if (height < 1)
		return (NULL);
	k = (int **)malloc(height * sizeof(k));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(k[j]);
			free(k);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			k[i][j] = 0;
	}
	return (k);
}
