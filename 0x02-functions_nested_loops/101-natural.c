#include <stdio.h>
/**
 * main - prints a multiples of 3 or 5 and below 1024
 *
 * Return: always 0;
 */
int main(void)
{	unsigned int j, sum1, sum3, sum5;
		sum1 = 0;
		sum5 = 0;
		sum3 = 0;

	for (j = 0; j <= 1024; j++)
	{
		if ((j % 3) == 0)
		{
			sum3 = sum3 + j;
		} else if ((j % 5) == 0)
		{
			sum5 = sum5 + j;
		}
	}
	sum1 = sum3 + sum5;
	printf("%ld", sum1);

	return (0);
}
