#include "main.h"

/**
 * _islower - Checks if the character is lower or capital letter.
 *
 * @c: is a paramerter that takes agument of type int.
 *
 * Return: 1 if the character is lowercase and 0 if  otherwise.
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
