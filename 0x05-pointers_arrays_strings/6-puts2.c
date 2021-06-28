#include "holberton.h"


/**
 * puts2 -  prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	while (*(str + index))
	{
		_putchar(*(str + index));
		index = index + 2;
	}
	_putchar('\n');
}
