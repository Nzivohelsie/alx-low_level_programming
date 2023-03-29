#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of arguments
 * @n: argument count
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	int sum = 0;

	va_start(l, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(l, int);
	va_end(l);
	return (sum);
}
