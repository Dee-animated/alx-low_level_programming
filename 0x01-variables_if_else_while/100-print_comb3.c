#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Description: combimatiom of two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 8 && b == 9)
				continue;
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
