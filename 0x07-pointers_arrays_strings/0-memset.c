#include "main.h"

/**
 * _memset - function to fill storage
 * @s: pointer to memory
 * @b: constant byte to fill s
 * @n: number of bytes to fill memory
 * Return: the value of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
