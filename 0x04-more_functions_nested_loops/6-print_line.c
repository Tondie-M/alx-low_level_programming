#include "holberton.h"

/**
 * print_line - draws straight line in the terminal
 * @n: determines the number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	char c = '_';
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
