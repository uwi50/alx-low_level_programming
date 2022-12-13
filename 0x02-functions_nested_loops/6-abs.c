#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - make the value of x a positive number
 * @x: is the argument or the number to make absolute
 *
 * Return: positive number always
 */

int _abs(int x)
{
	int c;

	if (x < 0)
	{
		c = abs(x);
		return (c);
	}
	else
		return (x);
}
