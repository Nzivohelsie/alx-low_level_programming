#include "main.h"
/**
 * swap_int - swap value
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int e;
	int f;

	e = *a;
	f = *b;
	*a = f;
	*b = e;
}
