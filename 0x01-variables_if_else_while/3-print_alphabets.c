#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char lowerCaseLetter = 'a';
char upperCaseLetter = 'A';

while (lowerCaseLetter <= 'z')
{
putchar(lowerCaseLetter);
lowerCaseLetter++;
}

while (upperCaseLetter <= 'Z')
{
putchar(upperCaseLetter);
upperCaseLetter++;
}

putchar('\n');

return (0);
}
