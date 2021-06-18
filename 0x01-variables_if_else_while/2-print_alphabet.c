#include <sdtdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{

char letter = 'a';

while (letter <= 'z')
{
putchar("%c\n", letter);
letter++;
}

return (0);

}
