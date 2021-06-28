#include "holberton.h"

/**
 * print_rev  -  prints a string, in reverse, followed by a new line
 * @s: dtring to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index = 0;

	while (*(s + index))
		index++;
	index = index - 1;
	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}
	_putchar('\n');
}
