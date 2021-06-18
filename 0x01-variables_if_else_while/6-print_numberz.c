#include <stdlib>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int number = 0;

while (number <= 10)
{
putchar(number);
number++;
}

putchar('\n');

return (0);
}
