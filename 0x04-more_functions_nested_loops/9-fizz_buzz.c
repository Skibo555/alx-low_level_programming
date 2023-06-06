#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 Always success.
 *
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz ");
		if (a % 5 == 0)
			printf("Buzz ");
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", a);
	}
	putchar(' ');
	return (0);
}
