#include "main.h"

/**
 * print_diagonal - this fuction prints diagonals.
 *
 * @n: the expected parameter.
 *
 * Return: Void.
 */

void print_diagonal(int n)
{
	int i = '\\';

	while (n > 0)
	{
		_putchar(i);
		n--;
	}
	_putchar('\n');
}
