
#include "main.h"
/**
 * _calc_root - finds root of number tested
 * @num: the number whose root is to be found
 * @root: the square root output
 *
 * Return: square root if it has natuar root
 *         (-1) if it does not have natural root
 */
int _calc_root(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_calc_root(num, (root + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural number whose root to be tested
 *
 * Return: if it has natural root, the root
 *         if it does not have (-1)
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_calc_root(num, root));
}
