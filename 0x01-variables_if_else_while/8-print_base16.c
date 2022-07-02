#include <stdio.h>
/**
 *main - prints all the numbers
 * of base 16 in lowercase
 * folowed by new line
 *
 * Return: always 0 (success)
 */
int main(void)
{int n;
char ch;
for (n = 0; n < 10; n++)
{
	putchar((n % 10) + '0'); }
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch); }
puchar('\n');
return (0); }
