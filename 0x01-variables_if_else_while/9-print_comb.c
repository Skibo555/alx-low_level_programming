#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 Always.
 *
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
		if (numbers <= '8')
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
