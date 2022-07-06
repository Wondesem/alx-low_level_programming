#include <main.h>
/**
 * _isalpha - checks alphabetic characters
 * @c: a charter to be checked
 *
 * Return: returns 0 or 1 based on condition
 */
int _isalpha(int c)
{	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
