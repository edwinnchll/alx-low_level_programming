#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number to concatenate string to
 * Return: Null when error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size = n, start;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (start = 0; s1[start]; start++)
		size++;
	concat = malloc(sizeof(char) * (size + 1));

	if (concat == NULL)
		return (NULL);

		size = 0;

	for (start = 0; s1[start]; start++)
		concat[size++] = s1[start];
		for (start = 0; s2[start] && start < n; start++)
			concat[size++] = s2[start];
		concat[size] = '\0';
	return (concat);
}
