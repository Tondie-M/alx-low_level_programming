#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{}

	i++;

	c = malloc(i * sizeof(char));

	if (c == NULL)
	{
		return (0);
	}

	j = 0;
	while (j < i)
	{
		c[j] = str[j];
		j++;
	}

	return (c);
}
