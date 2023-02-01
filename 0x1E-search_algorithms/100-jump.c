#include <math.h>
#include "search_algos.h"
int jump_search(int *array, size_t size, int value)
{
	int start = 0, end = sqrt(size);
	size_t i;
	while(array[end] < value && start < size)
	{
		start = end;
		end += sqrt(size);
		if(end > size - 1)
			end = size;
	}
	for(i = start; i < end ; i++)
	{
		if(array[i] == value)
			return i;
	}
	return (-1);
}
