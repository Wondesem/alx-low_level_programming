#include <stdio.h>
/**
 * main - prints all possible different
 * combinations of three digits
 *
 * Return: always 0 (success)
 */
int main(void)
{int x, y, q;
	for (x = 0; x < 8; x++)
	{
	for (y = x + 1; y < 9; y++)
	{
	for (q = y + 1; q < 10; q++)
	{
		putchar((x % 10) + '0');
		putchar((y % 10) + '0');
		putchar((q % 10) + '0');
		if (x == 7 && y == 8 && q == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n')
return (0);
}
