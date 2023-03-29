#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: list of arg types
 */
void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0;
	int sep;
	char *string;

	va_start(l, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(l, int));
			sep = 0;
			break;
		case 'i':
			printf("%d", va_arg(l, int));
			sep = 0;
			break;
		case 'f':
			printf("%f", va_arg(l, double));
			sep = 0;
			break;
		case 's':
			string = va_arg(l, char*);
			if (!string)
				string = "(nil)";
			printf("%s", string);
			sep = 0;
			break;
		default:
			sep = 1;
			break;
		}
		if (format[i + 1] != '\0' && sep == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(l);
}
