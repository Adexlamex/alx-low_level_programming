#include "main.h"

/**
 * main - Prints alphabets in
 *	small letters.
 * Return: always 0.
*/

void print_alphabet(void);

int main(void)
{
	char a;
	for (a = 'a'; a < 'z'; a++)
	{
		_putchar('a');
	}

	_putchar('\n');
	return (0);
}