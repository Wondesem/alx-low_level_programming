#include <stdio.h>
/**
 * main - prints all possible different
 * combinations of two digits
 *
 * Return: always 0 (success)
 */
int main(void)
{int x, y, q;
for (x = 48; x < 58; x++)
{
for (y = 49; y < 58; y++)
{
	for (q = 50; q < 58; q++)
	{
		if (q > y && y > x)
		{
			putchar(x);
			putchar(y);
			putchar(q);
			if (x != 55 || y != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
}
putchar('\n');
return (0);

}
