#include "main.h"

/**
 * reverse_array - it will reverse the contents of the array
 * @a : array name
 * @n : array size
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
		else
			printf(" ");
		i--;
	}
	printf("\n");
}
