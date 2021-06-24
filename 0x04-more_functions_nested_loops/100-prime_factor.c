#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int i, li = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((li % i == 0) && (li != i))
		{
			li = li / i;
		}
	}
	printf("%lu\n", li);
	return (0);
}
