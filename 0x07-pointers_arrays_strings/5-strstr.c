#include "main.h"

/**
 * _strstr - function finds the first occurrence of
 * the substring needle in the string haystack
 * @haystack: value inputted
 * @needle: value inputted
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *p = needle;

		while (*s == *p && *p != '\0')
		{
			s++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
