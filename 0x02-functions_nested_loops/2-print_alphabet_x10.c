#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int count;

	for (count  = 0; count <= 10; count++)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets)
		}
		_putchar('\n');
	}
}

