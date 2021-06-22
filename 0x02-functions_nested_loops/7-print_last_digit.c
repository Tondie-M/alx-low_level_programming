#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @n: value to be evaluated
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int lastDigit, num;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -1;
	}
	num = '0' + 1;
	_putchar(num);
	return (1);
}
