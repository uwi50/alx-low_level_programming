#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while ((dup[j] = str[j]) != '\0')
		j++;
	return (dup);
}
