#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the number of line to print out
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != n)
			_putchar('_');
		else
			_putchar('\n');
	}
}
