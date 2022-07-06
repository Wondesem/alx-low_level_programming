#include "main.h"
/**
 * print_times_table - prints n times table
 * input starting from 0
 *
 * @n: the value to be printed
 */
void print_times_table(int n)
{	int n1, n2, n3;
	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar('0');


			for (n2 = 1; n2 <= n; n2++)
			{
				n3 = n1 * n2;
				if (n2 == 0)
				{
					_putchar(n3 + '0');
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
					_putchar((n3 % 10) + '0');
				} else if (n3 >= 100)
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
