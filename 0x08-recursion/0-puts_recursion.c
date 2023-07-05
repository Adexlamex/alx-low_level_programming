#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: the string to print.
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
