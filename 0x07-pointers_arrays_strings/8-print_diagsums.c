
#include "main.h"
/**
 * print_diagsum - Print the sum of two diagonals of square matrix
 * @a: pointer to arrays of diagonals
 * @size: the matrix size
 * Return: nothimg
 */
void print_diagsums(int *a, int size)
{int i = 0, sum1 = 0, sum2 = 0;
	while (i < size)
	{sum1 += a[(size + 1) * i];
	sum2 += a[(size - 1) * (i + 1)];
	printf("Sum1 = %d. Sum2 = %d", sum1, sum2);
	}
}

