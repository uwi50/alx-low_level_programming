#include "main.h"
/**
 * *_strcat - Concatenates 
 * @dest : the string to be concatenated upon
 * @src : the source string to be appended
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destin_len = 0;

	while (dest[i++])
		destin_len++;
	for (i = 0; src[i]; i++)
		dest[destin_len++] = src[i];
	return (dest);
}
