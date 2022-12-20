#include "main.h"
/**
 * puts2 - function that prints one of 2 characters
 * @str: the string to use
 */

void puts2(char *str)
{
	int s_length = 0;
	int l = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		s_length++;
	}
	l = s_length - 1;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
