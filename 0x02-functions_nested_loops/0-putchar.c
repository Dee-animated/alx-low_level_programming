#include "main.h"

/**
 * main - Entry point
 *
 * Description : prints _putchar as a message
 *
 * Return : 0 on success
 */
int main(void)
{
	char p[8] = "_putchar";
		int i = 0;
		char c;
		while (i <= 8)
		{
			c = p(i);
			_putchar(c);
			i++;
		}
	_putchar('/n');
}
