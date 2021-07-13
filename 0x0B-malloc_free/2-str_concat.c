#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat -  concatenates two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}

	k = i + j + 1;
	c = malloc(k * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < k; l++)
	{
		if (l < i)
		{
			c[l] = s1[l];
		}
		else
		{
			c[l] = s2[l - i];
		}
	}
	return (c);
}
