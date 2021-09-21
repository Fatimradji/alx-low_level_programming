#include "holberton.h"

/**
 * alloc_grid - create 2-dimensional array via pointer
 * @width: column of values
 * @height: row of values
 * Return: a double pointer, since it behaves like 2d array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0;
	int **arr_ptr;

	arr_ptr = malloc(sizeof(**arr_ptr) * (height));

	for (; k < height; k++)
	{
		arr_ptr[k] = malloc(sizeof(**arr_ptr) * (width));
	}

	if (!arr_ptr)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			*(*(arr_ptr + i) + j) = 0;
		}
	}

	return (arr_ptr);
}
