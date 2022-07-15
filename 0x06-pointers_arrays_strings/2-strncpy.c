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
{int i;
for (i = 0; i < n && dest[i] != '\0'; i++)
	dest[i] = src[i];
i = 0;
while (i > n)
	i++;
dest[i] = 0;

}
