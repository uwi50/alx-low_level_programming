#include <stdio.h>

/**
 * print_alphabet_x10 - will print out the alphabets in lowercase 10 times
 */
 /* Return: it doesn't return since it is void*/

void print_alphabet_x10(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
