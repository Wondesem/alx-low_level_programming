#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked  - allocates memory using malloc
 * @b: memory to be allocated
 * Return: pointer to allocated memory
 *         98 if malloc failed
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}
