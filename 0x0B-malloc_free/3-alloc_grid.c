#include "main.h"

/**
 * alloc_grid - function that points to a 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(arr);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0
	}
	return (arr);
}
