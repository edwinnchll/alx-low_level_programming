#include "main.h"

/**
 * _strchr-function that locates a character in a string.
 * @s: string to be searched
 * @c: character to be located
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int start;

	for (start = 0;s[start] >= '\0'; start++)
	{
		if (s[start]==c)
			return (s+start);
	}
	return ('\0');
}
