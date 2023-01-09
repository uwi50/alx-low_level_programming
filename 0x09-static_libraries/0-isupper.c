#include <ctype.h>
/**
 * _isupper - checks if a character is uppercase or lowercase
 * @c: is the argument or character we check
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
