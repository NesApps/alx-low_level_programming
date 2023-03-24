#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to the name to print
 * @f: pointer to the function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

