#include "main.h"
/**
 * puts_half - function that prints the half of the string
 * @str: the string to use
 */

void puts_half(char *str)
{
	int s_length = 0;
	int l = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		s_length++;
	l = (s_length / 2);
	if ((s_length % 2) != 0)
		l = (s_length + 1) / 2;
	for (i = l; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
