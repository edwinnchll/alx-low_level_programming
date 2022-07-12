#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int i = 0, x = 0;

	while (str[i++])
		x++;

	for (i = 0; i < x; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
