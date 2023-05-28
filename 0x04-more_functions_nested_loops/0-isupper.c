#include "main.h"

/**
 * _isupper - it checks if the input is an upper case character of an alphabet.
 *
 * @a: the inpu.
 *
 * Return: a success.
 *
 */

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
