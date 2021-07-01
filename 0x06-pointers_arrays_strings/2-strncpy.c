#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: points to the destinantion string
 * @src: points to the source string
 * @n: int
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
	jhjh
}
