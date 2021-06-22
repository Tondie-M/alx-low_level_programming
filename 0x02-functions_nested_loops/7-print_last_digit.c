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
		lastDigit = -lastDigit;
	}
	num = '0' + lastDigit;
	_putchar(num);
	return (lastDigit);
}
