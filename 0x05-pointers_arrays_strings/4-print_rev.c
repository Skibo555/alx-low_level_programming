#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - it prints string in reverse.
 *
 * @s: the string to be printed.
 *
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	i = len - 1;
	while (len >= i)
	{
		_putchar(s[i]);
		i--;
		if (i < 0)
			break;
		if (s == NULL)
			break;
	}
	_putchar('\n');
}
