#include "main.h"

/**
 * _strncpy - function that copies a given number of bytes from one string onto another
 * @dest: base string to hold the string copy
 * @src: string to be copied
 * @n: maximum number of bytes to be copied from src string
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
