#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - malloc with 2d array
 *@width: width of the array
 *@height: height of the array
 *Return: array
 */
int **alloc_grid(int width, int height)
{
	int **arr2d;

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr2d = malloc(sizeof(int) * height);

	if (arr2d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr2d[i][j] = 0;
		}
	}
	return (arr2d);
}
