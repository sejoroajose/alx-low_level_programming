#include "main.h"

/**
 * flip_bits- calc bits needed to flip btw two numbers
 * @n: first argument
 * @m: second argument
 * Return: returns count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	unsigned int c = 0;

	while (r > 0)
	{
		c += r & 1;
		r >>= 1;
	}
	return (c);
}
