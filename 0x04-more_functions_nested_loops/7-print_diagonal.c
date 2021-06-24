#include "holberton.h"

/**
 * print_diagonal - draws diagonal line
 * @n: determines how many times \ must be printed
 * Return: void
 */

void print_diagonal(int n)
{
	char c = '\\';
	char s = ' ';
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(s);
		}

		_putchar(c);
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
