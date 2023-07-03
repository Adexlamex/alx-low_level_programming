#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string.
 * @s: the string.
 * @c: the char to find.
 *
 * Return: a pointer to the first occurrence.
 */

char *_strchr(char *s, char c)
{
	int r;

	while(1)
	{
		r = *s++;

		if (r == c)
		{
			return (s - 1);
		}

		if (r == 0)
		{
			return (NULL);
		}
	}
}
