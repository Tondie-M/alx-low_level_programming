#include "holberton.h"

/**
 * _strcmp -  compares two strings
 * @s1: points to the first string
 * @s2: points to the second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}


	return (s1[i] - s2[i]);
}
