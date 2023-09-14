#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - funtion that execute a funtion as
 * a given parameter.
 * @array: pointer to an array
 * @size: of the array
 * @action: to iterate the array
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
