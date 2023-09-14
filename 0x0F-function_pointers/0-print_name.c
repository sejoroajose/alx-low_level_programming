#include "function_pointers.h"

/**
 * print_name- function to print a name
 * @name: name
 * @f: function pointer
 * Return: return 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
