#include "main.h"

/**
 * _strlen - prints the length of strings.
 * @s: is the pointed string.
 *
 * Return: always nothing
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
