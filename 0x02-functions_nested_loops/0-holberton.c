#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i = 0;
	char c;
	char cs[] = "Holberton\n";

	while (i <= 9)
	{
		c = cs[i];

		_putchar(c);
		i++;
	}
	return (0);
}
