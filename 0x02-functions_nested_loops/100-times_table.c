#include "main.h"
/**
 * print_times_table - prints n times table
 * input starting from 0
 *
 * @n: the value to be printed
 */
void print_times_table(int n)
{	int num1, num2, num3;
	if (n >= 0 && n <= 15; n++)
	{
		for (num1 <= 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				num3 = num1 * num2;
				if (num3 <= 99)
					_putchar(' ');
				if (num3 <= 9)
					_putchar(' ');
				if (num3 <= 100)
				{
					_putchar((num3 / 100) + '0');
					_putchar((num3 / 10) % 10 + '0');
				}
				else if (num3 <= 99 && num3 >= 10)
				{
					_putchar((num3 / 10) + '0');
				}
				_putchar((num3 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}



