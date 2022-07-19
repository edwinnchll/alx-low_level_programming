
#include "main.h"

/**
 * _strstr - finds string
 * @haystack: String
 * @needle: substring
 * Return: Answer or Null
 */
char *_strstr(char *haystack, char *needle)
{
int start;

if (*needle == 0)
return (haystack);
while (*haystack)
{
start = 0;
if (haystack[start] == needle[start])
{
do {
if (needle[start + 1] == '\0')
return (haystack);
start++;
} while (haystack[start] == needle[start]);
}
haystack++;
}
return ('\0');
}
