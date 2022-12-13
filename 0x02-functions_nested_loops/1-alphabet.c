#include <stdio.h>

/**
 * print_alphabet() - will print out the alphabets in lowercase
 *
 * Return: it doesn't return since it is void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
