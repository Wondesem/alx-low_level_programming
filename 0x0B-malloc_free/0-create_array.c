#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: length of array
 * @c: character array created
 *
 * Return: pointer to the array
 *         or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
		char *m;

		if (size == 0)
			return (NULL);
		m = malloc(size * sizeof(char));

		if (m == 0)
		{
			return (NULL);
		}
		for (x = 0; x < size; x++)
		{
			m[x] = c;
		}
		return (m);
}
