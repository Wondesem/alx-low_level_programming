#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: pointer to array a
 * @n: number of array's elements
 *
 * Return: always 0
 */

void reverse_array(int *a, int n)
{int i, j;
	for (i = 0; i < (n / 2); i++)
	{j = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = j;
	}
}
