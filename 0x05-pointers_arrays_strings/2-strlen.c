#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: length
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
