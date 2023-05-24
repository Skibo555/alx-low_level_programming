#include "main.h"

/**
 * print_sign - Ckecks if the input is a sign character.
 *
 * @n: the inputted character.
 *
 * Return: 1 if it's possitive, 0 if it's zero and -1 if i's negative.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
