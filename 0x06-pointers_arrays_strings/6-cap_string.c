#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string that will be capitalized
 *
 * Return: the string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i]))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
		str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '\"'
		|| str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
