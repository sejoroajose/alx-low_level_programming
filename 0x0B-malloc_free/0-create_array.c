#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create array of chars, and initializes
 *  it with a specific char.
 *  @c: the char to initialize
 *  @size: number of bytes to allocate
 *
 *  Return: returns a pointer to the array or null if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
