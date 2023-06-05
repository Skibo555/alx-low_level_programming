#include "main.h"

/**
 * print_diagonal - this fuction prints diagonals.
 *
 * @n: the expected parameter.
 *
 */

void print_diagonal(int n)
{
	int a;
	int i = '\\';
	int space;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			space = a;
			if (a)
				while (space--)
					_putchar(' ');
			_putchar(i);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
