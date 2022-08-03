#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: to be print
 * @f: function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
