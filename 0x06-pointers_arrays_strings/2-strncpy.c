#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination file.
 * @src: copied string.
 * @n: the number of bytes of copied string.
 *
 * Return: dest, the copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
