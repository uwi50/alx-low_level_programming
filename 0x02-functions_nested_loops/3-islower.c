#include <stdio.h>
#include <ctype.h>
/**
 * _islower - will check if it is lower
 * 'c': c is the argument of the function is lower
 *
 * Return: return 1 for is lower and 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

