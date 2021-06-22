#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minutes, i, j, k, l;

	for (hour = 0; hour < 24; hour++)
	{
		i = hour / 10;
		j = hour % 10;

		for (minutes = 0; minutes < 60; minutes++)
		{
			k = minutes / 10;
			l = minutes % 10;

			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
