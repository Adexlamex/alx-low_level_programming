#include <stdio.h>

/**
 * main - Prints both small and capital
 *	letters of the alphabet.
 * Return: always 0.
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

		putchar('\n');
	
	return (0);
}
