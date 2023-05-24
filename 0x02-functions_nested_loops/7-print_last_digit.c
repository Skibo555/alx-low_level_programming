#include "main.h"

/**
 * print_last_digit - print the last digit of an integer.
 *
 * @a: is the input.
 *
 * Return: last digit on Success.
 *
 */

int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
		last = last * -1;
	_putchar('0' + last);
	return (last);
}
