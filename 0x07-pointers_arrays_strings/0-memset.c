#include "main.h"

/**
 * *_memset - fills the memory with a constant byte.
 * @s: memory area to be filled with byte.
 * @b: character to be copied.
 * @n: number of times b should be copied.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}

	return (s);
}
