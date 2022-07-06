#include "main.h"
/**
 * print_times_table - prints n times table
 * input starting from 0
 *
 * @n: the value to be printed
 */
void print_times_table(int n)
{	int num1, num2, num3;
	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				n3 = n1 * n2;
				if (n == 0)
				{
					_putchar(k + '0');
				} else if (n3 < 10 && n2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(n3 + '0');
				} else if (n3 >= 10 && n3 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((n3 / 10) + '0');
					_putcahr((n3 % 10) + '0');
				} else if (k >= 100)
				{
				_putchar(',');
				_putchar(' ');
				_putchar((n3 / 100) + '0');
				_putchar((n3 / 10) % 10 + '0');
				_putchar((n3 % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
