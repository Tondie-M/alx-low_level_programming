#include "holberton.h"

/**
 * leet - encodes a string
 * @c: string to encode
 *
 * Return: pointer
 */

char *leet(char *c)
{
	int i, j;

	char k[] = "aAeEoOtTlL";
	char l[] = "43071";

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (c[i] == k[j])
			{
				c[i] = l[j / 2];
			}
		}
	i++;
	}

	return (c);
}
