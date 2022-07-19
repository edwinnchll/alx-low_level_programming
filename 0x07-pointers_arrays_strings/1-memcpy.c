#include "main.h"

/**
 * _memcpy- function that copies first n values and fills with  char
 * @dest: memory to fill
 * @src: memory to copy from
 * @n: number of bytes to be filled
 * Return: variabble value of s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
