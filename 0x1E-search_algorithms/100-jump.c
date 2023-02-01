#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: Pointer to the beginning of an array
 * @size: The size of the array
 * @value: value to search for
 * Return: Nothing
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (array[end] < value && start < size)
	{
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
	}
	for (i = start; i < end ; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
