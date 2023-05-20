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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n < 0)
	{
		printf("is nagetive\n");
	}
	return (0);
}
