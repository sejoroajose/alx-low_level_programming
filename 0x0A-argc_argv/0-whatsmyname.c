#include "main.h"
#include <stdio.h>


/*
 *main- prints program's name and then follwed by newline
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
