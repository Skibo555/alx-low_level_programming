#include "main.h"

/**
 * _isdigit - the fuctions that checks if it's digit.
 *
 * @c: the input.
 *
 * Return: 1 if not success and 0 if otherwise.
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
