#include "main.h"

/**
 * print_line - this fuction prints line.
 *
 * @n: the expected parameter.
 *
 * Return: Void.
 */

void print_line(int n)
{
	int i = '_';

	while (n > 0)
	{
		_putchar(i);
		n--;
	}
	_putchar('\n');
}
