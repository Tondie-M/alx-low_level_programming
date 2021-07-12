#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: Pointer
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
