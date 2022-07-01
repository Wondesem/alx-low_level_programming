#include <stdio.h>
/**
 * main - prints all single digits
 * followed by new line
 * REturn: always 0 (success)
 */
int main(void)
{	int n;
	for (n = 0; n < 10; n++)
		printf("%d", n);
	print("\n");
	return (0);
}
