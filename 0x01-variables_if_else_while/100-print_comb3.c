#include <stdio.h>

/**
 * main - Entry  point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int leftDigit = 48;
	int rightDigit = 49;

	while (leftDigit < 57 && rightDigit < 58)
	{
		putchar(leftDigit);
		putchar(rightDigit);

		if (leftDigit == 56 && rightDigit == 57)
		{
			putchar('\n');
			leftDigit++;
			rightDigit++;
		}
		else
		{
			putchar(44);
			putchar(32);

			if (rightDigit < 57)
			{
				rightDigit++;
			}
			else
			{
				leftDigit++;
				rightDigit = 1 + leftDigit;
			}
		}
	}

	return (0);
}
