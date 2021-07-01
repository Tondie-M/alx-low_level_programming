#include "holberton.h"

/**
 * cap_string -  capitalizes all words of a string
 * @c: string to be capitalized
 *
 * Return: Capital
 */

char *cap_string(char *c)
{
	int i, j;
	char seperator[] = " \t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; seperator[j] != '\0'; j++)
		{
			if (c[i - 1] == seperator[j] && (c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] -= ('a' - 'A');
			}

		}

	}

	return (c);
}
