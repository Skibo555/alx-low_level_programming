#include <stdio.h>

/**
 * main - Entry point.
 *
 *
 * Return: 0 Always.
 *
 */

int main(void)
{
	int a;
	{
		for (a = 'a'; a <= 'z'; a++)
			if (a != 'q' && a != 'e')
				putchar(a);
	}
	putchar('\n');

	return (0);
}
