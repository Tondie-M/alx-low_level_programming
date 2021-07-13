#include <stdlib.h>
#include "holberton.h"

/**
 * create_array -  creates an array of chars, and initializes it with a char
 * @size: Size of the array
 * @c: charecters to add on the array
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	d = malloc(sizeof(char) * size);

	if (d == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}

	return (d);
}
