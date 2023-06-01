#include "main.h"
#include <stdio.h>

/**
 * print_rev - it prints string in reverse.
 *
 * @s: the string to be printed.
 *
 */

void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	i = len;
	while (len >= i)
	{
		_putchar(s[i]);
		i--;
		if (i < 0)
			break;
	}
	_putchar('\n');
}


/**
 * _strlen - it counts the lent of string.
 *
 * @s: the pointer to a string.
 *
 * Return: len .
 *
 */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
