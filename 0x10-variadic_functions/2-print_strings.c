#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- print string
 * @separator: in between strings
 * @n: argument count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *e;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		e = va_arg(l, char *);
		if (e == NULL)
		{
			printf("nil");
		}
		printf("%s", e);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
