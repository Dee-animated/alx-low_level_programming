#include "main.h"

/**
 * swap_int - swaps the values of two integer pointers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
