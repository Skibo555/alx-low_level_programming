#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Return: 0 Always sSuccess.
 *
 */

int main(void)
{
	int n;
	int last;

	last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
