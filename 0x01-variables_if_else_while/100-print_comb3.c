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
	int number;

	for (numbers = '0'; numbers <= '8'; numbers++)
	{
		for (number = '1'; number <= '9'; number++)
		{
			if (numbers < number)
			{
				putchar(numbers);
				putchar(number);
				{
					if (numbers == '8' && number == '9')
						continue;
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
