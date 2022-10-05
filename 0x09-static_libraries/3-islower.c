#include "main.h"

/**
 * _islower - function that checks for a lowercase character
 *
 * Description: checks if a character is lowercase
 *
 * @c: the integer value assigned
 *
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
