#include <stdio.h>

/**
 * main - prints all alphabets
 *	except q and e.
 * Return: always 0.
*/

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}

	}
	putchar('\n');
	return (0);
}
