#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated with n bit limit
 * @n: number of byte added from src
 *
 * Return: returns pointer to dest sting result
 */
char *_strncat(char *dest, char *src, int n)
{int i, j;
	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && n > 0; j+, n--, i++)
	{dest[i] = src[j];
	}
return (dest);
}
