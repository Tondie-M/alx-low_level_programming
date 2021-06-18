#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

int numbers = 48;
char letters = 'a';

while (numbers < 58)
{
putchar(numbers);
numbers++
}

while (letters <= 'f')
{
putchar(letters);
letters++;
}

putchar('\n');
return (0);

}
