#include "main.h"
/**
 * square  - compare squares of numbers < than n
 * @n: number
 * @i: parameter for comparison
 * Return: square root
 */
int square(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (square(n, i + 1));
}

/**
 * _sqrt_recursion - find square root recursively
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
