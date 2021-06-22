#include "holberton.h"

/**
 * _abs - Entry point
 * @n: int to be evaluated
 *
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
