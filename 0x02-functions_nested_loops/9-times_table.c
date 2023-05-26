#include "main.h"

/**
 * timrs_table - prints times table.
 *
 *
 * Returns: 0.
 *
 */

void times_table(void)
{
	int count;
	int line;
	int container;

	for (count = 0; count < 10; count++)
	{
		for (line = 0; line < 10; line++)
		{
			container = line * count;
			if (line == 0)
			{
				_putchar(container + '0');
			}
			if (container < 10 && line != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(container + '0');
			}
			else if (container >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((container / 10) + '0');
				_putchar((container % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
