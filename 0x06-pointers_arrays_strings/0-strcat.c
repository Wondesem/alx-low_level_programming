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
{	while (*dest) ++dest;
	while (*dest++ = *src++);
	return (dest);
}
