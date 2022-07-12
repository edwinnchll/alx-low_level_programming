#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, x = 0, y;

	while (str[i++])
		x++;

	if ((x % 2) == 0)
		y = x / 2;

	else
		y = (x + 1) / 2;

	for (i = y; i < x; i++)
		_putchar(str[i]);

	_putchar('\n');
}
