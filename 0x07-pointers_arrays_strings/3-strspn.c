#include "main.h"

/**
 * _strspn- function for length
 * @s: string
 * @accept: for measurement
 * Return: The number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int start;

while (*s)
{
for (start = 0; accept[start]; start++)
{
if (*s == accept[start])
{
b++;
break;
}
else if (accept[start + 1] == '\0')
return (b);
}
s++;
}
return (b);
}
