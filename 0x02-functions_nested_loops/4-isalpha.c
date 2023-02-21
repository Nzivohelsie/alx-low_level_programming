#include "main.h"
/**
 * _isalpha - check letters
 * Return: always 0 , 1 (success)
 * @c: interger
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
