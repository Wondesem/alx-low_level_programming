#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to where sting will be copied to
 * @src: string to be copied to
 * @n: parameter to determine number of bytes copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{int x;
for (x = 0; x < n && src[x] != '\0'; x++)
	dest[x] = src[x];
for (; n > x; x++)
	dest[x] = '\0';
return (dest);
}
