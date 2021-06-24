#include "holberton.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
