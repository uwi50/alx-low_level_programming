#include "main.h"


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
