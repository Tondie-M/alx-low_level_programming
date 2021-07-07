#include "holberton.h"

/**
 * sqrt_number - sqrt
 * @num1: int one for  sqrt_number
 * @num2: int two for sqrt_number
 *
 * Return: int
 */

int sqrt_number(int num1, int num2)
{

	if (num2 * num2 > num1)
		return (-1);
	else if (num2 * num2 == num1)
		return (num2);
	return (sqrt_number(num1, num2 + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sqrt_number(n, 1));
}
