#include "main.h"
/**
 * _strcat - concatenates strings pointed by @src 
 * to the end of string pointed by @dest
 * @dest: string to be appended
 * @src: string to be concatenated
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src);
{int i, j;
	i = 0;
	j = 0;
while (dest[i++])
	j++;
for (i = 0; src[i]; i++)
dest[j++] = src[i];
return (dest);
}
