#include "main.h"

/**
 * print_alphabet - It print alphabets in lowercase.
 *
 * Return: 0 Always.
 *
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
