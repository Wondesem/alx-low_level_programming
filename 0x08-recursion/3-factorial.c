
#include "main.h"
/**
 * factorial - returns the factorial of given number
 * @n: number whose factorial to be returned
 *
 * Return: if n > 0; returns the n factorial
 *         if n < 0; returns -1 indicating error
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
		fact = fact * factorial(n - 1);
		return (fact);
}
