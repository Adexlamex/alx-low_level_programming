#include "main.h"

/**
 * main - Prints alphabets in
 *	small letters.
 * Return: always 0.
*/

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
