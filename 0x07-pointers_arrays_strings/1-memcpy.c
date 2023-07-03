#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: the destination of the copied n.
 * @src: the memory area to copy from.
 * @n: number of times to copy.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
