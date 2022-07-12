#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, x = 0;
	char tmp;

	while (s[i++])
		x++;

	for (i = x - 1; i >= x / 2; i--)
	{
		tmp = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = tmp;
	}
}
