#include "main.h"

/**
 * _puts - prints a string.
 * @str: the string to be printed.
 *
 * Return: always nothing.
 */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
		_putchar('\n');

}
