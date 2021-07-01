#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 *
 * Return: int
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}

	return (dest);
}
