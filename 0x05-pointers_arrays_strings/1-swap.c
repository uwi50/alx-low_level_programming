#include "main.h"

/**
 * swap_int - it is a function that swaps 2 numbers using arg a and b
 * @a: 1st argument
 * @b: 2nd arg or 2nd nmbr
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *b;
	*b = *a;
	*a = swp;
}
