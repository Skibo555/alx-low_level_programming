#include "main.h"

/**
 * more_numbers - it prints numbers 10 times.
 *
 */

void more_numbers(void)
{
	int n;
	char m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar('1');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
