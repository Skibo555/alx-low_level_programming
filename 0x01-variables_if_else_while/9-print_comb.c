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
		if (numbers < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
