#include "main.h"
#include <stdio.h>

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
