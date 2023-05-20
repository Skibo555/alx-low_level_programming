#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 Always.
 *
 */

int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
