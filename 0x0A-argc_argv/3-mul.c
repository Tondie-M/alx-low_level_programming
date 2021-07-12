#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: Pointer
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;

	printf("%i\n", k);

	return (0);
}
