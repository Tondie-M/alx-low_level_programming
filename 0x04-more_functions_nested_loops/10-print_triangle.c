#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: Number of times # must be printed
 * Return: void
 */

void print_triangle(int size)
{
	char c = '#';
	char s = ' ';
	int i, j;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < size)
			{
				 _putchar(s);
			}
			if ((j + i) >= size)
			{
				_putchar(c);
			}
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
