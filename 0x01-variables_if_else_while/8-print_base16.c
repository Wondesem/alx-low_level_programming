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
for (n = 48; n < 58; n++)
{
	putchar(n); }
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch); }
puchar('\n');
return (0); }
