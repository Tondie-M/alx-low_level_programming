#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int leftDigit = 48;
	int middleDigit = 49;
	int rightDigit = 50;

	while (leftDigit < 56 && middleDigit < 57 && rightDigit < 58)
	{
		putchar(leftDigit);
		putchar(middleDigit);
		putchar(rightDigit);

		if (leftDigit == 55 && middleDigit == 56 && rightDigit == 57)
		{
			putchar('\n');
			leftDigit++;
			midleDigit++;
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
			else if (middleDigit < 56 && rightDigit == 57)
			{
				rightDigit = 1 + middleDigit++;
			}
			else
			{
				middleDigit = 1 + leftDigit++;
				rightDigit = 1 + middleDigit++;
			}
		}
	}
	return (0);
}

