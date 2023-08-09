#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2-D array
 * @width:columb of the 2-d arry
 * @height: row of the 2-D array
 * Return: return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i;
	int j;

	if (height == 0 || width == 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
			output[i][j] = 0;
	}
	return (output);
}
