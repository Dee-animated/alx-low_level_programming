#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: strimg parameter
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i, half;
	char ch;

	for (l = 0; s[l] != '\0'; l++)
	;
	i = 0;
	half = l / 2;

	while (half--)
	{
		ch = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = ch;
		i++;
	}
}
