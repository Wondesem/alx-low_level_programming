#include "main.h"
/**
 * main - prints a multiples of 3 or 5 and below 1024
 *
 * Return: always 0;
 */
int main(void)
{	int j;
	 int sum = 0;

	for (j = 0; j <= 1024; j++)
	{
		if ((j % 3) == 0 || (j % 5))
			sum + = j;
	}
	print("%d", sum);

	return (0);
}
