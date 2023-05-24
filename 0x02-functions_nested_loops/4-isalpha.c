#include "main.h"

/**
 * _isalpha - It checks if the input is alphabet.
 *
 * @c: is the input to check.
 *
 * Return: 1 if the C is an alphabeth, returns 0 otherwise.
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
