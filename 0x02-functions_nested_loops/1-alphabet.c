#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
