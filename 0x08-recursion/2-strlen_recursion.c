
#include "main.h"
/**
 * _strlen_recursion - returns he lenght of a string
 * @s: string whose lenght to be found
 *
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}
	return (leng);

}
