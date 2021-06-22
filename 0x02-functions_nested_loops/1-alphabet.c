#include "holberton.h"

/**
 * print_alphabet- Entry point
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}

	_putchar('\n');
}

