#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string to encode
 *
 * Return: string
 */

char *rot13(char *c)
{
	int i, j;

	char k[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (k[j] == *(c + i))
			{
				*(c + i) = l[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
