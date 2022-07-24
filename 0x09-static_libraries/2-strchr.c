
#include "main.h"
/**
 * *_strchr - locate a character in a string
 * @s: string where character is located
 * @c: character to be located
 * Return: returns character
 */

char *_strchr(char *s, char c)
{int i, j;
	i = 0;
	while (s[i])
	{i++; }
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{s += j;
			return (s);
		}

	}
return ('\0');
}
