#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: one concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i = 0, j = 0,m = 0, n = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	conc = malloc((i + j + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	if (s1)
	{
		while (m < i)
		{
			conc[m] = s1[m];
			m++;
		}
	}
	if (s2)
	{
		while (m < (i + j))
		{
			conc[m] = s2[n];
			m++;
			n++;
		}
	}
	conc[m] = '\0';
	return (conc);
}
