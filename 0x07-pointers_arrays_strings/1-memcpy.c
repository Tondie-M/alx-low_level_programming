#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: ponts to the destination memory
 * @src: points to the source memory
 * @n: number of bytes
 * Return: Pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
