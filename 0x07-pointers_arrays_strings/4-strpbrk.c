#include "main.h"

/**
 * _strpbrk - look for for any of a set of bytes.
 * @s: The string 
 * @accept:set of bytes
 * Return: Searched values
 */
char *_strpbrk(char *s, char *accept)
{
int start;

while (*s)
{
for (start = 0; accept[start]; start++)
{
if (*s == accept[start])
return (s);
}
s++;
}
return ('\0');
}
