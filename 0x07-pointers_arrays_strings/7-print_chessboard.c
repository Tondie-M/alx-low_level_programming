#include "holberton.h"

/**
 * print_chessboard  - prints the chessboard
 * @a: Pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	i++;
	_putchar('\n');
	}
}
