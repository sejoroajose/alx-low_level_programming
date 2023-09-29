#include "main.h"

/**
 * get_endianness(void)- checks for endianness
 * Return: returns void
 */

int get_endianness(void)
{
	int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
