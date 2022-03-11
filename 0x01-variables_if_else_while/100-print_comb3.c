#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 48; m <= 56; m++)
	{
		for (n = 49; n <= 57; n++)
		{
			putchar(m);
			putchar(n);
			if(m != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

