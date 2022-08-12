#include "function_pointers.h"

/**
 * print_name - Prints any name entered
 * @name: The name
 * @f: A pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

