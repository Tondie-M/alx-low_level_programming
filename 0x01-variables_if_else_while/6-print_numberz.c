#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int number = 48;

while (number < 58)
{
putchar(number);
number++;
}

putchar('\n');

return (0);
}
