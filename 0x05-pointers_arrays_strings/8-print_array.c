#include "holberton.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers, followed by a new line.
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%i", a[index]);
		if (index < (n - 1))
			printf(", ");
		index++;
	}
	printf("\n");
}
