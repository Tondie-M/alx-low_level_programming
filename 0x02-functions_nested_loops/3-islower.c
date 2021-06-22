#include "holberton.h"

/**
 * _islower - Entry point
 * @c: is the value to be evaluated
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
