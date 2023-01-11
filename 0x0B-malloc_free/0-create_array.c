#include "main.h"

/**
 * create_array - creates an array of chars
 * @size : size of the memory
 * @c : character
 *
 * Return: an array p
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
