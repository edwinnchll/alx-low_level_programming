#include "main.h"

/**
 * _strlen_recursion- for length of string
 * @s: string
 * Return: Size ofthe string
 */
int _strlen_recursion(char *s)
{
	int size = 0;
	if (*s)
	{
	size++;
	size+= _strlen_recursion(s + 1);
	}
	return (size);
}
