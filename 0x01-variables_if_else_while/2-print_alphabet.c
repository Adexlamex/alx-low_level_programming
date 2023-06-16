#include <stdio.h>

/**
 * main - Prints a-z in small
 *	letters.
 * Return: always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}
