#include "main.h"
/**
 * print_last_digit - last digit
 * @n: parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int e;

	e = n % 10;
	if (n < 0)
	{
		e = -e;
	}
	_putchar(e + '0');
	return (e);
}
