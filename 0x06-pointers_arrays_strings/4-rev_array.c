#include "holberton.h"

/**
 * reverse_array - everses the content of an array of integers
 * @a: points to ant int
 * @n: is the number of elements of the array
 *
 * Return: An array in reverse
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i  = j = 0;
	n -= 1;

	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
