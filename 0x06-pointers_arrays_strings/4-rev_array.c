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

	i  =  0;
	n -= 1;

	for (i = 0; i <= n; i++)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
