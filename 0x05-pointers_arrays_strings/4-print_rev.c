#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to tbe reserved.
 */
void print_rev(char *s)
{
	int x = 0, i = 0;

	while (s[i++])
		x++;

	for (i = x - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
