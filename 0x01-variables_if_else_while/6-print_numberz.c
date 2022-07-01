#include <stdio.h>
/**
 * main - prints numbers from 0 to 9
 * followed by new line
 * Return: always 0 (success)
 */
int main(void)
{int n;
	for (n = 48; n < 58; n++)
	{	putchar(n);
	}
	putchar('\n');
	return (0);
}
