#include "main.h"

/**
 * get_bit- retrieve the value of a bit at a given index
 * @n: argument
 * @index: input index
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	while (index > 0)
	{
		n >>= 1;
		index--;
	}
	bit = n & 1;

	return (bit);
}
