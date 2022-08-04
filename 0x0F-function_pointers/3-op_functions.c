#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two given integers
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - finds difference of two given integers
  * @a: first operand
  * @b: second operand
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two given integers
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides first integer by second integer
 * @a: integer to be divided
 * @b: integer divides
 * Return: quotient of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder
 * @a: first operand
 * @b: second operand
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
