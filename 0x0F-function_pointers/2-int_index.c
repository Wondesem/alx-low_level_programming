#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array to search through
 * @size: number of element in array
 * @cmp: pointer to compare
 * Return: return index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i m;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			m = cmp(array[i]);
			if (m)
				break;
		}
	if (i < size)
		return (i);
	}
	return (-1);
}
