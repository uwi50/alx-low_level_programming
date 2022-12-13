#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - will check if it is an alphabet
 * @c: c is the argument of the function alpha
 *
 * Return: return 1 for is alpha and 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

