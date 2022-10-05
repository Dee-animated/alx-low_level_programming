#include "main.h"

/**
 * test_isalpha - Test the _isalpha function
 * @c: integer value ascribed to _isalpha function
 * Description: checks for alphabets
 * Return: 1 on success. 0 on error.
 */
 int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
