#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: Letters in lowercase
 *
 * Return: Uppercaase letters
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 'a' - 'A';
		}
	}
	return (c);
}
