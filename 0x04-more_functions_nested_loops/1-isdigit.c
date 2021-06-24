#include "holberton.h"

/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: value to be evaluated
 * Return: 1 if is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
