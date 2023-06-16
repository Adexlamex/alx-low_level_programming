#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the value of the
 * 	last digit.
 * Return: always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit;
	printf("Last digit of %d is", n);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
