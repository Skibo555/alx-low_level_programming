#include "main.h"

/**
 * main - It print alphabets in lowercase.
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