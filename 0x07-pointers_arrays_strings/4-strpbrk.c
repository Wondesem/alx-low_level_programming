
#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: source of string
 * @accept: character accepted
 * Return: returns pointer to byte in s.
 */
char *_strpbrk(char *s, char *accept)
{int i, j;
	i = 0;
while (s[i])
{
	j = 0;
while (accept[b])
{
if (s[i] == accept[j])
{s += i;
return (s); }
j++;
}
i++;
}
return ('\0');
}
