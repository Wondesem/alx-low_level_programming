#include "main.h"
/**
 * _strcat - concatenates strings pointed by
 * @src  to the end of string pointed by @dest
 * @dest: string to be appended
 * @src: string to be concatenated
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{int i, j;
	i = 0;
while (dest[i] != '\0')
	i++;
for (j = 0; src[j] != '\0'; j++)
{dest[i] = src[j];
	i++;
}
dest[i] = '\0';
return (dest);
}
