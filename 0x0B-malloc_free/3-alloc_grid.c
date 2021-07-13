#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **c;

	i = j = 0;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	c = (int **)malloc(sizeof(c) * height);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(sizeof(int) * width);
		if (c[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{

				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			c[i][j] = 0;
		}
	}
	return (c);
}





