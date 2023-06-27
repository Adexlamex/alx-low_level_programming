#include "main.h"

/**
 * puts2 - prints every other character.
 * @str: the pointed string.
 *
 * Return: always nothing.
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
