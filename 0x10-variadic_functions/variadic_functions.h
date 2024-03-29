#ifndef VARDIADIC_FUNCTION_H
#define VARDIADIC_FUNCTION_H
#include <stdarg.h>
/**
 * struct print - prints user defined type
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
}print_t;
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARDIADIC_FUNCTION_H */

