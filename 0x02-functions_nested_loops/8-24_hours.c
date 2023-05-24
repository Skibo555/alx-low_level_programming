#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the timer.
 *
 * @s: stands for the second.
 * @m: stands for the minute.
 *
 * Return: 0 Always.
 *
 */

void jack_bauer(void)
{
	int m;
	int s;

	for (m = 0; m == s; m++)
	{
		for (s = 0; s <= 59; s++)
		{
			printf("%02d:%02d", m, s);
			printf("\n");
		}
	}
}
