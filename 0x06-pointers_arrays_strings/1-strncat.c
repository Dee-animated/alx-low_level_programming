#include "main.h"

/**
 * _strncat - concatenates/joins two strings using a given number of bytes from the second string
 * @dest: base string
 * @src: strimg to be added to dest
 * @n: number of bytes of the src string to be joined to dest
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
