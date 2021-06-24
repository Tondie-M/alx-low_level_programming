#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char i;
	int j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				l = j;
			}
			else
			{
				k = j / 10;
				l = j % 10;
				_putchar('0' + k);
			}
			_putchar('0' + l);
		}
		_putchar('\n');
	}
}
