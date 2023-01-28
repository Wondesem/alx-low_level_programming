#include "search_algos.h"
/**
 * binary_search - searchs for a value using binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: first index value is at, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		for (i = left; i < right; i++)
		{
			mid = left + (right - left) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				right = mid - 1;
			else
				left = mid + 1;
		}
return (-1)
	}
}
