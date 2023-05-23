#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase times 10.
 *
 * Return: 0 Always.
 *
 */

void print_alphabet_x10(void)
{
	int a;
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

