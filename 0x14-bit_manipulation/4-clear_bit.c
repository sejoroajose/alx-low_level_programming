#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index
 * @n: pointer to range
 * @index: input argument
 * Return: 1 to indicate successful operation
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n &= ~m;
	return (1);
}
