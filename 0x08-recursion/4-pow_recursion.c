
#include "main.h"
/**
 * _pow_recursion - returns the value x raised to power of y
 * @x: The number to be powered
 * @y: power
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int nPow = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	nPow *= _pow_recursion(x, (y - 1));
	return (nPow);
}
