#include "main.h"

/**
 * _strcat- function to concatenate strings
 * @dest: first string input
 * @src: second string input
 * Return: returns the concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i, n;
	n = dest_len;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
	
	_putchar('\n');
}
