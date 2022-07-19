
#include "main.h"
/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: pointer to arrays of diagonals
 * @size: the matrix size
 * Return: nothimg
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
