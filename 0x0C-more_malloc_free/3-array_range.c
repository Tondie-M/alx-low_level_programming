#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: - Integer one
 * @max: Integer two
 *
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int i, j, *p;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	p = malloc(j * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
