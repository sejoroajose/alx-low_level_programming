#include "main.h"

/**
 * print_binary- converts int to binary
 * @n: input integer
 */

void print_binary(unsigned long int n)
{
	int bitCount = sizeof(n) * 8;
	int bit;
	int pFlag = 0;
	int i = bitCount - 1;

	if (n == 0)
	{
		_putchar('0');
	}

	while (i >= 0)
	{
		bit = (n >> i) & 1;

		if (bit)
		{
			_putchar('1');
			pFlag = 1;
		}
		else if (pFlag)
		{
			_putchar('0');
		}
		i--;
	}

	if (!pFlag)
	{
		_putchar('0');
	}
}
