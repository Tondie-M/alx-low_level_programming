#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints from value n to 98
 * @i: input value
 *
 * Return: void
 */

void print_to_98(int i)
{
	while (i != 98)
	{
		printf("%d, ", i);
		if (i > 98)
		{
			i--;
		}
		else
		{
			i++;
		}
	}
}
