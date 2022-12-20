#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int s_length = 0;
	int o;

	/* s_length = strlen(s); */
	while (*s != '\0')
	{
		s_length++;
		s++;
	}
	s--;
	for (o = s_length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
