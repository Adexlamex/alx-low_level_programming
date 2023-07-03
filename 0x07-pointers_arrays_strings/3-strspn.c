#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring.
 * @s: string to be checked.
 * @accept: the source string.
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, e, x, y;

	x = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		y = 0;

		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[r] == accept[e])
			{
				x++;

				y = 1;

			}
		}
		if (y == 0)
		{
			return (x);
		}
	}

	return (0);
}
