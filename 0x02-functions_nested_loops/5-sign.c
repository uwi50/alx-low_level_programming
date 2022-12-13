#include <stdio.h>
/**
 * print_sign - will print out sign
 *
 * Return: 1 if greater and -1 if less than 0 then 0 if 0
 * 
 */

int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		c = putchar('+');
		return (c && 1);
	}
	else if (n < 0)
	{
		c = putchar('-');
		return (c && -1);
	}
	else
	{
		c = putchar('0');
		return (c && 0);
	}
}
