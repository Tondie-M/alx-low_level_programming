#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int fd, sd, td = 48;
	int ld = 49;

	while (fd < 48)
	{
		putchar(fd); putchar(sd); putchar(td); putchar(ld);

		if (fd == 57 && sd == 56 && td == 57 && ld == 57)
		{
			putchar('\n');
			fd++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (td == 57 && ld == 57)
			{
				if (sd < 56)
				{
					ld = sd++ + 1;
					td = fd;
				}
				else if (sd == 56)
				{
					sd++;
					td = fd + 1;
					ld = 48;
				}
				else if (sd == 57)
				{
					sd = 48;
					ld = 49;
					td = ++fd;
				}
			}
			else if (ld < 57)
			{
				ld++;
			}
			else
			{
				ld = 48;
				td++;
			}
		}
	}
	return (0);
}
