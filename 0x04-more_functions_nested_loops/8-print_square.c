#include "main.h"

/**
 * print_square - it prints shits in squre.
 *
 * @size: The expected input.
 *
 */

void print_square(int size)
{
	int n;
	int i;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
