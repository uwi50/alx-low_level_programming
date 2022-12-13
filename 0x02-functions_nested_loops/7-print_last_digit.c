#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: the number
 * Return value of last digit
 */

int print_last_digit(int x)
{
	int r = x % 10;

	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	return (0);
}
