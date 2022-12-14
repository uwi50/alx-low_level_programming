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

	if (size == 0)
		return (NULL);
	p = malloc((size) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (size > 0)
	{
		p[size] = c;
		size--;
	}
	return (p);
}
