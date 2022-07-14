#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @src: first string to be concatenate
 * @dest: second string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src);
{int i, j;
for (i = 0; dest[i] != '\0'; i++)
for (j = 0; src[j] != '\0'; j++)
{dest[i] = str[j];
	i++;
}
return (dest);
}
