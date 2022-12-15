#include <ctype.h>
/**
 * _isdigit - checks if a character is digit or not
 * @c: is the argument or character we check
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
