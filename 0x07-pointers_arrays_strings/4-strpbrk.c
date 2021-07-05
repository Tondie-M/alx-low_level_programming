#include "holberton.h"

/**
 * *_strpbr -  searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: String
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
