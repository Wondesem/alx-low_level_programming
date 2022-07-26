#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string to be copied
 * Return: return pointer to duplicated string
 *         NULL if str is NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;

	char *sr
		if (str == NULL)
		{
			return (NULL);
		}
	for (i = 0; str[i] != '\0'; i++)
		j++;
	sr = malloc((j + 1) * sizeof(char));
	if (sr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		sr[i] = str[i];
	}
	sr[j] = '\0';
	return (sr);


}
